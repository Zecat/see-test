#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 12

enum {
  sym_includes = 1,
  aux_sym_group_token1 = 2,
  aux_sym_group_name_token1 = 3,
  aux_sym__subgroup_line_token1 = 4,
  anon_sym_COLON = 5,
  anon_sym_GT_GT = 6,
  anon_sym_EQ_GT = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  sym_varname = 11,
  sym_identifier = 12,
  sym_number = 13,
  sym_null = 14,
  anon_sym_AMP = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_token1 = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_char_token1 = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  sym_comment = 22,
  sym_c_code = 23,
  sym_multiline_c_code = 24,
  aux_sym__c_code_token1 = 25,
  aux_sym__c_code_token2 = 26,
  anon_sym_PERCENT_GT = 27,
  sym_source_file = 28,
  sym_group = 29,
  sym_subgroup = 30,
  sym_group_name = 31,
  sym__subgroup_line = 32,
  sym_subgroup_name = 33,
  sym_function_alias_definition = 34,
  sym_call_expression = 35,
  aux_sym__return_expectation = 36,
  sym__capture_output = 37,
  sym__return_value_expectation = 38,
  sym_argument_list = 39,
  sym__expectable_value = 40,
  sym_expectation = 41,
  sym__value = 42,
  sym_address = 43,
  sym_string = 44,
  sym_char = 45,
  sym_array = 46,
  sym__c_code = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_group_repeat1 = 49,
  aux_sym_group_repeat2 = 50,
  aux_sym_subgroup_repeat1 = 51,
  aux_sym_argument_list_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_includes] = "includes",
  [aux_sym_group_token1] = "group_token1",
  [aux_sym_group_name_token1] = "group_name_token1",
  [aux_sym__subgroup_line_token1] = "_subgroup_line_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_varname] = "varname",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_null] = "null",
  [anon_sym_AMP] = "&",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_c_code] = "c_code",
  [sym_multiline_c_code] = "c_code",
  [aux_sym__c_code_token1] = "_c_code_token1",
  [aux_sym__c_code_token2] = "_c_code_token2",
  [anon_sym_PERCENT_GT] = "%>",
  [sym_source_file] = "source_file",
  [sym_group] = "group",
  [sym_subgroup] = "subgroup",
  [sym_group_name] = "group_name",
  [sym__subgroup_line] = "_subgroup_line",
  [sym_subgroup_name] = "subgroup_name",
  [sym_function_alias_definition] = "function_alias_definition",
  [sym_call_expression] = "call_expression",
  [aux_sym__return_expectation] = "_return_expectation",
  [sym__capture_output] = "_capture_output",
  [sym__return_value_expectation] = "_return_value_expectation",
  [sym_argument_list] = "argument_list",
  [sym__expectable_value] = "_expectable_value",
  [sym_expectation] = "expectation",
  [sym__value] = "_value",
  [sym_address] = "address",
  [sym_string] = "string",
  [sym_char] = "char",
  [sym_array] = "array",
  [sym__c_code] = "_c_code",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_group_repeat1] = "group_repeat1",
  [aux_sym_group_repeat2] = "group_repeat2",
  [aux_sym_subgroup_repeat1] = "subgroup_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_includes] = sym_includes,
  [aux_sym_group_token1] = aux_sym_group_token1,
  [aux_sym_group_name_token1] = aux_sym_group_name_token1,
  [aux_sym__subgroup_line_token1] = aux_sym__subgroup_line_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_varname] = sym_varname,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_null] = sym_null,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_c_code] = sym_c_code,
  [sym_multiline_c_code] = sym_c_code,
  [aux_sym__c_code_token1] = aux_sym__c_code_token1,
  [aux_sym__c_code_token2] = aux_sym__c_code_token2,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [sym_source_file] = sym_source_file,
  [sym_group] = sym_group,
  [sym_subgroup] = sym_subgroup,
  [sym_group_name] = sym_group_name,
  [sym__subgroup_line] = sym__subgroup_line,
  [sym_subgroup_name] = sym_subgroup_name,
  [sym_function_alias_definition] = sym_function_alias_definition,
  [sym_call_expression] = sym_call_expression,
  [aux_sym__return_expectation] = aux_sym__return_expectation,
  [sym__capture_output] = sym__capture_output,
  [sym__return_value_expectation] = sym__return_value_expectation,
  [sym_argument_list] = sym_argument_list,
  [sym__expectable_value] = sym__expectable_value,
  [sym_expectation] = sym_expectation,
  [sym__value] = sym__value,
  [sym_address] = sym_address,
  [sym_string] = sym_string,
  [sym_char] = sym_char,
  [sym_array] = sym_array,
  [sym__c_code] = sym__c_code,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_group_repeat1] = aux_sym_group_repeat1,
  [aux_sym_group_repeat2] = aux_sym_group_repeat2,
  [aux_sym_subgroup_repeat1] = aux_sym_subgroup_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_includes] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__subgroup_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_varname] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_c_code] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_c_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__c_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__c_code_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_subgroup] = {
    .visible = true,
    .named = true,
  },
  [sym_group_name] = {
    .visible = true,
    .named = true,
  },
  [sym__subgroup_line] = {
    .visible = false,
    .named = true,
  },
  [sym_subgroup_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_alias_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__return_expectation] = {
    .visible = false,
    .named = false,
  },
  [sym__capture_output] = {
    .visible = false,
    .named = true,
  },
  [sym__return_value_expectation] = {
    .visible = false,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expectable_value] = {
    .visible = false,
    .named = true,
  },
  [sym_expectation] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__c_code] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subgroup_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias_name = 1,
  field_arguments = 2,
  field_expect = 3,
  field_function_name = 4,
  field_input = 5,
  field_name = 6,
  field_output = 7,
  field_return = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias_name] = "alias_name",
  [field_arguments] = "arguments",
  [field_expect] = "expect",
  [field_function_name] = "function_name",
  [field_input] = "input",
  [field_name] = "name",
  [field_output] = "output",
  [field_return] = "return",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 4},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 4},
  [11] = {.index = 18, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0, .inherited = true},
  [2] =
    {field_alias_name, 0},
    {field_function_name, 2},
  [4] =
    {field_arguments, 1},
    {field_name, 0},
  [6] =
    {field_arguments, 1},
    {field_name, 0},
    {field_output, 2, .inherited = true},
    {field_return, 2, .inherited = true},
  [10] =
    {field_output, 0, .inherited = true},
  [11] =
    {field_return, 0, .inherited = true},
  [12] =
    {field_output, 1},
  [13] =
    {field_return, 1},
  [14] =
    {field_output, 0, .inherited = true},
    {field_output, 1, .inherited = true},
    {field_return, 0, .inherited = true},
    {field_return, 1, .inherited = true},
  [18] =
    {field_expect, 2},
    {field_input, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 24,
  [42] = 25,
  [43] = 30,
  [44] = 44,
  [45] = 45,
  [46] = 20,
  [47] = 19,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 27,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 54,
  [58] = 58,
  [59] = 55,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 68,
  [73] = 69,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 65,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '=') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(1);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_group_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_group_name_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_group_name_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_group_name_token1);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_group_name_token1);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_group_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__subgroup_line_token1);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 'L') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 'L') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 'U') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_varname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(54);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_multiline_c_code);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__c_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__c_code_token2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__c_code_token2);
      if (lookahead == '\n') ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 67},
  [65] = {.lex_state = 56},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 51},
  [76] = {.lex_state = 51},
  [77] = {.lex_state = 56},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_group_token1] = ACTIONS(1),
    [aux_sym__subgroup_line_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_varname] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym__c_code_token1] = ACTIONS(1),
    [aux_sym__c_code_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(71),
    [sym_includes] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    ACTIONS(9), 2,
      sym_varname,
      sym_null,
    STATE(55), 2,
      sym__expectable_value,
      sym_expectation,
    STATE(48), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [37] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(9), 2,
      sym_varname,
      sym_null,
    STATE(59), 2,
      sym__expectable_value,
      sym_expectation,
    STATE(48), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [74] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_varname,
      sym_null,
    STATE(52), 2,
      sym__expectable_value,
      sym_expectation,
    STATE(48), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [111] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 2,
      sym_varname,
      sym_null,
    STATE(58), 2,
      sym__expectable_value,
      sym_expectation,
    STATE(48), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [145] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_AMP,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 2,
      sym_varname,
      sym_null,
    STATE(22), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [175] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(39), 2,
      sym_varname,
      sym_null,
    STATE(60), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [205] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym__subgroup_line_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      aux_sym__c_code_token1,
    ACTIONS(51), 1,
      aux_sym__c_code_token2,
    STATE(17), 1,
      sym__subgroup_line,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      aux_sym_group_token1,
    STATE(40), 2,
      sym_subgroup,
      aux_sym_group_repeat2,
    STATE(11), 3,
      sym_function_alias_definition,
      sym__c_code,
      aux_sym_group_repeat1,
  [237] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(53), 2,
      sym_varname,
      sym_null,
    STATE(43), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [267] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_AMP,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      sym_number,
    ACTIONS(57), 2,
      sym_varname,
      sym_null,
    STATE(30), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [297] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym__subgroup_line_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      aux_sym__c_code_token1,
    ACTIONS(51), 1,
      aux_sym__c_code_token2,
    STATE(17), 1,
      sym__subgroup_line,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      aux_sym_group_token1,
    STATE(39), 2,
      sym_subgroup,
      aux_sym_group_repeat2,
    STATE(18), 3,
      sym_function_alias_definition,
      sym__c_code,
      aux_sym_group_repeat1,
  [329] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_GT_GT,
    ACTIONS(68), 1,
      anon_sym_EQ_GT,
    STATE(12), 1,
      aux_sym__return_expectation,
    STATE(21), 1,
      sym__return_value_expectation,
    STATE(23), 1,
      sym__capture_output,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [356] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_GT_GT,
    ACTIONS(75), 1,
      anon_sym_EQ_GT,
    STATE(12), 1,
      aux_sym__return_expectation,
    STATE(21), 1,
      sym__return_value_expectation,
    STATE(23), 1,
      sym__capture_output,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [383] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_GT_GT,
    ACTIONS(75), 1,
      anon_sym_EQ_GT,
    STATE(13), 1,
      aux_sym__return_expectation,
    STATE(21), 1,
      sym__return_value_expectation,
    STATE(23), 1,
      sym__capture_output,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [410] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(84), 1,
      aux_sym__c_code_token1,
    ACTIONS(87), 1,
      aux_sym__c_code_token2,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
    STATE(15), 4,
      sym_function_alias_definition,
      sym_call_expression,
      sym__c_code,
      aux_sym_subgroup_repeat1,
  [434] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym__c_code_token1,
    ACTIONS(51), 1,
      aux_sym__c_code_token2,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
    STATE(15), 4,
      sym_function_alias_definition,
      sym_call_expression,
      sym__c_code,
      aux_sym_subgroup_repeat1,
  [458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym__c_code_token1,
    ACTIONS(51), 1,
      aux_sym__c_code_token2,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
    STATE(16), 4,
      sym_function_alias_definition,
      sym_call_expression,
      sym__c_code,
      aux_sym_subgroup_repeat1,
  [482] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(101), 1,
      aux_sym__c_code_token1,
    ACTIONS(104), 1,
      aux_sym__c_code_token2,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
    STATE(18), 3,
      sym_function_alias_definition,
      sym__c_code,
      aux_sym_group_repeat1,
  [505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 8,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym__subgroup_line_token1,
    STATE(17), 1,
      sym__subgroup_line,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_group_token1,
    STATE(32), 2,
      sym_subgroup,
      aux_sym_group_repeat2,
  [705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      aux_sym_group_token1,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym__subgroup_line_token1,
    STATE(17), 1,
      sym__subgroup_line,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      aux_sym_group_token1,
    STATE(32), 2,
      sym_subgroup,
      aux_sym_group_repeat2,
  [795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym__subgroup_line_token1,
    STATE(17), 1,
      sym__subgroup_line,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      aux_sym_group_token1,
    STATE(32), 2,
      sym_subgroup,
      aux_sym_group_repeat2,
  [813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      aux_sym_group_token1,
    STATE(45), 2,
      sym_group,
      aux_sym_source_file_repeat1,
  [857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      aux_sym_group_token1,
    STATE(45), 2,
      sym_group,
      aux_sym_source_file_repeat1,
  [871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_EQ_GT,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      aux_sym_group_token1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(44), 2,
      sym_group,
      aux_sym_source_file_repeat1,
  [917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(170), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_argument_list_repeat1,
  [954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      sym_varname,
    STATE(28), 1,
      sym_string,
  [967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
  [980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_argument_list_repeat1,
  [993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COLON,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_argument_list,
  [1006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
  [1019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_argument_list_repeat1,
  [1041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
  [1063] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym_group_name_token1,
    STATE(8), 1,
      sym_group_name,
  [1073] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_group_name_token1,
    STATE(38), 1,
      sym_subgroup_name,
  [1083] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_c_code,
  [1090] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_char_token1,
  [1097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [1104] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_multiline_c_code,
  [1111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
  [1118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
  [1125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_identifier,
  [1132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
  [1139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
  [1146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
  [1153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_PERCENT_GT,
  [1160] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(218), 1,
      aux_sym_string_token1,
  [1167] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym_string_token1,
  [1174] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(222), 1,
      aux_sym_char_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 267,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 329,
  [SMALL_STATE(13)] = 356,
  [SMALL_STATE(14)] = 383,
  [SMALL_STATE(15)] = 410,
  [SMALL_STATE(16)] = 434,
  [SMALL_STATE(17)] = 458,
  [SMALL_STATE(18)] = 482,
  [SMALL_STATE(19)] = 505,
  [SMALL_STATE(20)] = 519,
  [SMALL_STATE(21)] = 533,
  [SMALL_STATE(22)] = 547,
  [SMALL_STATE(23)] = 561,
  [SMALL_STATE(24)] = 575,
  [SMALL_STATE(25)] = 589,
  [SMALL_STATE(26)] = 603,
  [SMALL_STATE(27)] = 617,
  [SMALL_STATE(28)] = 631,
  [SMALL_STATE(29)] = 645,
  [SMALL_STATE(30)] = 659,
  [SMALL_STATE(31)] = 673,
  [SMALL_STATE(32)] = 687,
  [SMALL_STATE(33)] = 705,
  [SMALL_STATE(34)] = 717,
  [SMALL_STATE(35)] = 729,
  [SMALL_STATE(36)] = 741,
  [SMALL_STATE(37)] = 753,
  [SMALL_STATE(38)] = 765,
  [SMALL_STATE(39)] = 777,
  [SMALL_STATE(40)] = 795,
  [SMALL_STATE(41)] = 813,
  [SMALL_STATE(42)] = 823,
  [SMALL_STATE(43)] = 833,
  [SMALL_STATE(44)] = 843,
  [SMALL_STATE(45)] = 857,
  [SMALL_STATE(46)] = 871,
  [SMALL_STATE(47)] = 881,
  [SMALL_STATE(48)] = 891,
  [SMALL_STATE(49)] = 903,
  [SMALL_STATE(50)] = 917,
  [SMALL_STATE(51)] = 931,
  [SMALL_STATE(52)] = 941,
  [SMALL_STATE(53)] = 954,
  [SMALL_STATE(54)] = 967,
  [SMALL_STATE(55)] = 980,
  [SMALL_STATE(56)] = 993,
  [SMALL_STATE(57)] = 1006,
  [SMALL_STATE(58)] = 1019,
  [SMALL_STATE(59)] = 1028,
  [SMALL_STATE(60)] = 1041,
  [SMALL_STATE(61)] = 1050,
  [SMALL_STATE(62)] = 1063,
  [SMALL_STATE(63)] = 1073,
  [SMALL_STATE(64)] = 1083,
  [SMALL_STATE(65)] = 1090,
  [SMALL_STATE(66)] = 1097,
  [SMALL_STATE(67)] = 1104,
  [SMALL_STATE(68)] = 1111,
  [SMALL_STATE(69)] = 1118,
  [SMALL_STATE(70)] = 1125,
  [SMALL_STATE(71)] = 1132,
  [SMALL_STATE(72)] = 1139,
  [SMALL_STATE(73)] = 1146,
  [SMALL_STATE(74)] = 1153,
  [SMALL_STATE(75)] = 1160,
  [SMALL_STATE(76)] = 1167,
  [SMALL_STATE(77)] = 1174,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__return_expectation, 2, .production_id = 10),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__return_expectation, 2, .production_id = 10), SHIFT_REPEAT(53),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__return_expectation, 2, .production_id = 10), SHIFT_REPEAT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2), SHIFT_REPEAT(56),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2), SHIFT_REPEAT(64),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2), SHIFT_REPEAT(67),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgroup, 2, .production_id = 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgroup, 1, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(66),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(64),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(67),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__return_expectation, 1, .production_id = 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_value_expectation, 2, .production_id = 9),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__return_expectation, 1, .production_id = 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__capture_output, 2, .production_id = 8),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(63),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__c_code, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgroup_name, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_name, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__c_code, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_alias_definition, 3, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subgroup_line, 2, .production_id = 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4, .production_id = 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expectable_value, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expectation, 3, .production_id = 11),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [210] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cmut(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
