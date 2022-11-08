module.exports = grammar({
  name: 'cmut',

  extras: $ => [
      $.comment,
    /[\s]/,
  ],
  
  rules: {
    source_file: $ => seq($.includes, repeat($.group)),

    includes: $ => /[^===]*/,

    group: $ => seq(
      /===+\n/,
      field('name', $.group_name),
      repeat(choice($._c_code, $.function_alias_definition)),
      repeat($.subgroup)
    ),

    subgroup: $ => seq(
      $._subgroup_line,
      repeat(choice( $.function_alias_definition, $._c_code, $.call_expression))
    ),

    group_name: $ => /.+/,

    _subgroup_line: $ => seq(/- */, field('name', $.subgroup_name)),

    subgroup_name: $ => /.+/,

    function_alias_definition: $ => seq(
      field('alias_name', $.identifier),
      ':',
      field('function_name', $.identifier)
    ),

    call_expression: $ => seq(
      field('name', $.identifier),
      field('arguments', $.argument_list),
      optional($._return_expectation)
    ),

    _return_expectation: $ => repeat1(choice(
      $._return_value_expectation,
      $._capture_output
    )),

    _capture_output: $ => seq(
      '>>',
      field('output', choice($.string, $.varname)),
    ),

    _return_value_expectation: $ => seq(
      '=>',
      field('return', $._value),
    ),

    // TODO: Think about, nested arg tree structure or the shorter the better ? But shorter is less uniform
    argument_list: $ => seq(
      '(',
      commaSep($._expectable_value),
      ')'
    ),

    _expectable_value: $ => choice(
      $.expectation,
      $._value
    ),

    expectation: $ => seq(
      field('input', $._value),
      '=>',
      field('expect', $._value)
    ),

    _value: $ => choice(
      $.number,
      $.string,
      $.char,
      $.array,
      $.null, // TODO test
      $.address,
      $.varname,
    ),

    varname: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    identifier: $ => /[A-Za-z0-9_]+/,

    number: $ => /[-]?\d+/,

    null: $ => 'NULL',

    address: $ => seq('&', $._value),

    // TODO: use immediate token ? see https:github.com/tree-sitter/tree-sitter-c/blob/517bf92b2c5e8baa4241cbb8a49085ed7c3c48d4/grammar.js#L960
    // TODO: string_content & string_litteral ?
    string: $ => seq(
      '"',
      /[^"]*/,
      '"'
    ),

    char: $ => seq(
      '\'',
      /[^']?/,
      '\''),

    array: $ => seq(
      '[',
      commaSep($._expectable_value),
      ']'
    ),

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    c_code: $ => /.*/,

    multiline_c_code: $ => /[^%]*[^>]/,

    _c_code: $ => choice(
      seq(/%[\s]*/, $.c_code),
      seq(/<%\n?/, alias($.multiline_c_code, $.c_code), '%>')
    )

  }
});

function commaSep(rule) {
  return optional(seq(rule, repeat(seq(',', rule))));
}
