#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 12

enum {
  sym_includes = 1,
  aux_sym__subgroup_line_token1 = 2,
  sym_subgroup_name = 3,
  anon_sym_COLON = 4,
  anon_sym_GT_GT = 5,
  anon_sym_EQ_GT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  sym_varname = 10,
  sym_identifier = 11,
  sym_number = 12,
  sym_null = 13,
  anon_sym_AMP = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_string_token1 = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_char_token1 = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  sym_comment = 21,
  sym_c_code = 22,
  sym_multiline_c_code = 23,
  aux_sym__c_code_token1 = 24,
  aux_sym__c_code_token2 = 25,
  anon_sym_PERCENT_GT = 26,
  sym_source_file = 27,
  sym_subgroup = 28,
  sym__subgroup_line = 29,
  sym_function_alias_definition = 30,
  sym_call_expression = 31,
  aux_sym__return_expectation = 32,
  sym__capture_output = 33,
  sym__return_value_expectation = 34,
  sym_argument_list = 35,
  sym__expectable_value = 36,
  sym_expectation = 37,
  sym__value = 38,
  sym_address = 39,
  sym_string = 40,
  sym_char = 41,
  sym_array = 42,
  sym__c_code = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_subgroup_repeat1 = 45,
  aux_sym_argument_list_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_includes] = "includes",
  [aux_sym__subgroup_line_token1] = "_subgroup_line_token1",
  [sym_subgroup_name] = "subgroup_name",
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
  [sym_subgroup] = "subgroup",
  [sym__subgroup_line] = "_subgroup_line",
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
  [aux_sym_subgroup_repeat1] = "subgroup_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_includes] = sym_includes,
  [aux_sym__subgroup_line_token1] = aux_sym__subgroup_line_token1,
  [sym_subgroup_name] = sym_subgroup_name,
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
  [sym_subgroup] = sym_subgroup,
  [sym__subgroup_line] = sym__subgroup_line,
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
  [aux_sym__subgroup_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_subgroup_name] = {
    .visible = true,
    .named = true,
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
  [sym_subgroup] = {
    .visible = true,
    .named = true,
  },
  [sym__subgroup_line] = {
    .visible = false,
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
    {field_name, 0, .inherited = true},
  [1] =
    {field_name, 1},
  [2] =
    {field_arguments, 1},
    {field_name, 0},
  [4] =
    {field_alias_name, 0},
    {field_function_name, 2},
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_includes);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__subgroup_line_token1);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_subgroup_name);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_subgroup_name);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_subgroup_name);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_subgroup_name);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_subgroup_name);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 'L') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 'L') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 'U') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_varname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_multiline_c_code);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__c_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__c_code_token2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__c_code_token2);
      if (lookahead == '\n') ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
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
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 64},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 53},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 48},
  [67] = {.lex_state = 53},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(65),
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
    STATE(47), 2,
      sym__expectable_value,
      sym_expectation,
    STATE(40), 5,
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
    STATE(51), 2,
      sym__expectable_value,
      sym_expectation,
    STATE(40), 5,
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
    STATE(44), 2,
      sym__expectable_value,
      sym_expectation,
    STATE(40), 5,
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
    STATE(49), 2,
      sym__expectable_value,
      sym_expectation,
    STATE(40), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [145] = 8,
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
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(27), 2,
      sym_varname,
      sym_null,
    STATE(52), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [175] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 2,
      sym_varname,
      sym_null,
    STATE(23), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [205] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(43), 2,
      sym_varname,
      sym_null,
    STATE(17), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [235] = 8,
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
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(47), 2,
      sym_varname,
      sym_null,
    STATE(38), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [265] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_GT_GT,
    ACTIONS(55), 1,
      anon_sym_EQ_GT,
    STATE(11), 1,
      aux_sym__return_expectation,
    STATE(25), 1,
      sym__capture_output,
    STATE(26), 1,
      sym__return_value_expectation,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [291] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_GT_GT,
    ACTIONS(62), 1,
      anon_sym_EQ_GT,
    STATE(11), 1,
      aux_sym__return_expectation,
    STATE(25), 1,
      sym__capture_output,
    STATE(26), 1,
      sym__return_value_expectation,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [317] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_GT_GT,
    ACTIONS(55), 1,
      anon_sym_EQ_GT,
    STATE(10), 1,
      aux_sym__return_expectation,
    STATE(25), 1,
      sym__capture_output,
    STATE(26), 1,
      sym__return_value_expectation,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(72), 1,
      aux_sym__c_code_token1,
    ACTIONS(75), 1,
      aux_sym__c_code_token2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
    STATE(13), 4,
      sym_function_alias_definition,
      sym_call_expression,
      sym__c_code,
      aux_sym_subgroup_repeat1,
  [366] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      aux_sym__c_code_token1,
    ACTIONS(84), 1,
      aux_sym__c_code_token2,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
    STATE(15), 4,
      sym_function_alias_definition,
      sym_call_expression,
      sym__c_code,
      aux_sym_subgroup_repeat1,
  [389] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      aux_sym__c_code_token1,
    ACTIONS(84), 1,
      aux_sym__c_code_token2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
    STATE(13), 4,
      sym_function_alias_definition,
      sym_call_expression,
      sym__c_code,
      aux_sym_subgroup_repeat1,
  [412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      aux_sym__subgroup_line_token1,
    STATE(14), 1,
      sym__subgroup_line,
    STATE(35), 2,
      sym_subgroup,
      aux_sym_source_file_repeat1,
  [620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      aux_sym__subgroup_line_token1,
    STATE(14), 1,
      sym__subgroup_line,
    STATE(32), 2,
      sym_subgroup,
      aux_sym_source_file_repeat1,
  [637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [659] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym__subgroup_line_token1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym__subgroup_line,
    STATE(32), 2,
      sym_subgroup,
      aux_sym_source_file_repeat1,
  [676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(136), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_EQ_GT,
    ACTIONS(140), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 4,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_argument_list_repeat1,
  [775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_argument_list,
  [788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_argument_list_repeat1,
  [801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_argument_list_repeat1,
  [814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_argument_list_repeat1,
  [827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [836] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_varname,
    STATE(22), 1,
      sym_string,
  [849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_argument_list_repeat1,
  [862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_argument_list_repeat1,
  [884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_SQUOTE,
  [891] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_string_token1,
  [898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_PERCENT_GT,
  [905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_identifier,
  [912] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_multiline_c_code,
  [919] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_c_code,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
  [933] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_subgroup_name,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
  [947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
  [954] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(184), 1,
      aux_sym_char_token1,
  [961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [968] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(188), 1,
      aux_sym_string_token1,
  [975] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(190), 1,
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
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 265,
  [SMALL_STATE(11)] = 291,
  [SMALL_STATE(12)] = 317,
  [SMALL_STATE(13)] = 343,
  [SMALL_STATE(14)] = 366,
  [SMALL_STATE(15)] = 389,
  [SMALL_STATE(16)] = 412,
  [SMALL_STATE(17)] = 425,
  [SMALL_STATE(18)] = 438,
  [SMALL_STATE(19)] = 451,
  [SMALL_STATE(20)] = 464,
  [SMALL_STATE(21)] = 477,
  [SMALL_STATE(22)] = 490,
  [SMALL_STATE(23)] = 503,
  [SMALL_STATE(24)] = 516,
  [SMALL_STATE(25)] = 529,
  [SMALL_STATE(26)] = 542,
  [SMALL_STATE(27)] = 555,
  [SMALL_STATE(28)] = 568,
  [SMALL_STATE(29)] = 581,
  [SMALL_STATE(30)] = 592,
  [SMALL_STATE(31)] = 603,
  [SMALL_STATE(32)] = 620,
  [SMALL_STATE(33)] = 637,
  [SMALL_STATE(34)] = 648,
  [SMALL_STATE(35)] = 659,
  [SMALL_STATE(36)] = 676,
  [SMALL_STATE(37)] = 690,
  [SMALL_STATE(38)] = 700,
  [SMALL_STATE(39)] = 710,
  [SMALL_STATE(40)] = 720,
  [SMALL_STATE(41)] = 732,
  [SMALL_STATE(42)] = 742,
  [SMALL_STATE(43)] = 752,
  [SMALL_STATE(44)] = 762,
  [SMALL_STATE(45)] = 775,
  [SMALL_STATE(46)] = 788,
  [SMALL_STATE(47)] = 801,
  [SMALL_STATE(48)] = 814,
  [SMALL_STATE(49)] = 827,
  [SMALL_STATE(50)] = 836,
  [SMALL_STATE(51)] = 849,
  [SMALL_STATE(52)] = 862,
  [SMALL_STATE(53)] = 871,
  [SMALL_STATE(54)] = 884,
  [SMALL_STATE(55)] = 891,
  [SMALL_STATE(56)] = 898,
  [SMALL_STATE(57)] = 905,
  [SMALL_STATE(58)] = 912,
  [SMALL_STATE(59)] = 919,
  [SMALL_STATE(60)] = 926,
  [SMALL_STATE(61)] = 933,
  [SMALL_STATE(62)] = 940,
  [SMALL_STATE(63)] = 947,
  [SMALL_STATE(64)] = 954,
  [SMALL_STATE(65)] = 961,
  [SMALL_STATE(66)] = 968,
  [SMALL_STATE(67)] = 975,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__return_expectation, 2, .production_id = 10),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__return_expectation, 2, .production_id = 10), SHIFT_REPEAT(50),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__return_expectation, 2, .production_id = 10), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2), SHIFT_REPEAT(45),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2), SHIFT_REPEAT(59),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2), SHIFT_REPEAT(58),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgroup, 1, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgroup, 2, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__capture_output, 2, .production_id = 8),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_value_expectation, 2, .production_id = 9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__return_expectation, 1, .production_id = 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__return_expectation, 1, .production_id = 7),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__c_code, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_alias_definition, 3, .production_id = 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subgroup_line, 2, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__c_code, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expectable_value, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expectation, 3, .production_id = 11),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
