#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 12

enum {
  aux_sym__subgroup_line_token1 = 1,
  sym_subgroup_name = 2,
  anon_sym_COLON = 3,
  anon_sym_GT_GT = 4,
  anon_sym_EQ_GT = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  sym_varname = 9,
  sym_identifier = 10,
  sym_number = 11,
  sym_null = 12,
  anon_sym_AMP = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_token1 = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_char_token1 = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_comment = 20,
  sym_c_code = 21,
  sym_multiline_c_code = 22,
  aux_sym__c_code_token1 = 23,
  aux_sym__c_code_token2 = 24,
  sym_source_file = 25,
  sym_subgroup = 26,
  sym__subgroup_line = 27,
  sym_function_alias_definition = 28,
  sym_call_expression = 29,
  aux_sym__return_expectation = 30,
  sym__capture_output = 31,
  sym__return_value_expectation = 32,
  sym_argument_list = 33,
  sym__expectable_value = 34,
  sym_expectation = 35,
  sym__value = 36,
  sym_address = 37,
  sym_string = 38,
  sym_char = 39,
  sym_array = 40,
  sym__c_code = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_source_file_repeat2 = 43,
  aux_sym_subgroup_repeat1 = 44,
  aux_sym_argument_list_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_subgroup_repeat1] = "subgroup_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_subgroup_repeat1] = aux_sym_subgroup_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [aux_sym_source_file_repeat2] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
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
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(67);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__subgroup_line_token1);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_subgroup_name);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_subgroup_name);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_subgroup_name);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_subgroup_name);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_subgroup_name);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 'L') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 'L') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 'U') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_varname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(48);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_c_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_multiline_c_code);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__c_code_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__c_code_token1);
      if (lookahead == '\n') ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__c_code_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 45},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 50},
  [54] = {.lex_state = 0},
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
    [sym_source_file] = STATE(47),
    [sym_subgroup] = STATE(30),
    [sym__subgroup_line] = STATE(20),
    [sym_function_alias_definition] = STATE(8),
    [sym__c_code] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_source_file_repeat2] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__subgroup_line_token1] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [aux_sym__c_code_token1] = ACTIONS(11),
    [aux_sym__c_code_token2] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 2,
      sym_varname,
      sym_null,
    STATE(39), 2,
      sym__expectable_value,
      sym_expectation,
    STATE(36), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [37] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 2,
      sym_varname,
      sym_null,
    STATE(42), 2,
      sym__expectable_value,
      sym_expectation,
    STATE(36), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [74] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 2,
      sym_varname,
      sym_null,
    STATE(40), 2,
      sym__expectable_value,
      sym_expectation,
    STATE(36), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [108] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(31), 2,
      sym_varname,
      sym_null,
    STATE(27), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [138] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(35), 2,
      sym_varname,
      sym_null,
    STATE(14), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [168] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(39), 2,
      sym_varname,
      sym_null,
    STATE(38), 5,
      sym__value,
      sym_address,
      sym_string,
      sym_char,
      sym_array,
  [198] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym__subgroup_line_token1,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      aux_sym__c_code_token1,
    ACTIONS(13), 1,
      aux_sym__c_code_token2,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym__subgroup_line,
    STATE(33), 2,
      sym_subgroup,
      aux_sym_source_file_repeat2,
    STATE(21), 3,
      sym_function_alias_definition,
      sym__c_code,
      aux_sym_source_file_repeat1,
  [229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 10,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 10,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 10,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 10,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [293] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_GT_GT,
    ACTIONS(58), 1,
      anon_sym_EQ_GT,
    STATE(13), 1,
      aux_sym__return_expectation,
    STATE(26), 1,
      sym__return_value_expectation,
    STATE(28), 1,
      sym__capture_output,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 10,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [335] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_GT_GT,
    ACTIONS(67), 1,
      anon_sym_EQ_GT,
    STATE(13), 1,
      aux_sym__return_expectation,
    STATE(26), 1,
      sym__return_value_expectation,
    STATE(28), 1,
      sym__capture_output,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [361] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_GT_GT,
    ACTIONS(67), 1,
      anon_sym_EQ_GT,
    STATE(15), 1,
      aux_sym__return_expectation,
    STATE(26), 1,
      sym__return_value_expectation,
    STATE(28), 1,
      sym__capture_output,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 10,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [403] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym__c_code_token1,
    ACTIONS(13), 1,
      aux_sym__c_code_token2,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
    STATE(19), 4,
      sym_function_alias_definition,
      sym_call_expression,
      sym__c_code,
      aux_sym_subgroup_repeat1,
  [426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(82), 1,
      aux_sym__c_code_token1,
    ACTIONS(85), 1,
      aux_sym__c_code_token2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
    STATE(19), 4,
      sym_function_alias_definition,
      sym_call_expression,
      sym__c_code,
      aux_sym_subgroup_repeat1,
  [449] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym__c_code_token1,
    ACTIONS(13), 1,
      aux_sym__c_code_token2,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
    STATE(18), 4,
      sym_function_alias_definition,
      sym_call_expression,
      sym__c_code,
      aux_sym_subgroup_repeat1,
  [472] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(95), 1,
      aux_sym__c_code_token1,
    ACTIONS(98), 1,
      aux_sym__c_code_token2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
    STATE(21), 3,
      sym_function_alias_definition,
      sym__c_code,
      aux_sym_source_file_repeat1,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      anon_sym_GT_GT,
      anon_sym_EQ_GT,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [596] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym__subgroup_line_token1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym__subgroup_line,
    STATE(32), 2,
      sym_subgroup,
      aux_sym_source_file_repeat2,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [624] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      aux_sym__subgroup_line_token1,
    STATE(20), 1,
      sym__subgroup_line,
    STATE(32), 2,
      sym_subgroup,
      aux_sym_source_file_repeat2,
  [641] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym__subgroup_line_token1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym__subgroup_line,
    STATE(32), 2,
      sym_subgroup,
      aux_sym_source_file_repeat2,
  [658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      aux_sym__subgroup_line_token1,
      sym_identifier,
      aux_sym__c_code_token1,
      aux_sym__c_code_token2,
  [669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(131), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_EQ_GT,
    ACTIONS(135), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_varname,
    STATE(25), 1,
      sym_string,
  [708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_argument_list_repeat1,
  [730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      aux_sym_argument_list_repeat1,
  [752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym_argument_list_repeat1,
  [765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_argument_list_repeat1,
  [778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_argument_list,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_identifier,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
  [812] = 2,
    ACTIONS(161), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_c_code,
  [819] = 2,
    ACTIONS(161), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_subgroup_name,
  [826] = 2,
    ACTIONS(161), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_string_token1,
  [833] = 2,
    ACTIONS(161), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_multiline_c_code,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
  [847] = 2,
    ACTIONS(161), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_char_token1,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 229,
  [SMALL_STATE(10)] = 245,
  [SMALL_STATE(11)] = 261,
  [SMALL_STATE(12)] = 277,
  [SMALL_STATE(13)] = 293,
  [SMALL_STATE(14)] = 319,
  [SMALL_STATE(15)] = 335,
  [SMALL_STATE(16)] = 361,
  [SMALL_STATE(17)] = 387,
  [SMALL_STATE(18)] = 403,
  [SMALL_STATE(19)] = 426,
  [SMALL_STATE(20)] = 449,
  [SMALL_STATE(21)] = 472,
  [SMALL_STATE(22)] = 494,
  [SMALL_STATE(23)] = 507,
  [SMALL_STATE(24)] = 520,
  [SMALL_STATE(25)] = 533,
  [SMALL_STATE(26)] = 546,
  [SMALL_STATE(27)] = 559,
  [SMALL_STATE(28)] = 572,
  [SMALL_STATE(29)] = 585,
  [SMALL_STATE(30)] = 596,
  [SMALL_STATE(31)] = 613,
  [SMALL_STATE(32)] = 624,
  [SMALL_STATE(33)] = 641,
  [SMALL_STATE(34)] = 658,
  [SMALL_STATE(35)] = 669,
  [SMALL_STATE(36)] = 683,
  [SMALL_STATE(37)] = 695,
  [SMALL_STATE(38)] = 708,
  [SMALL_STATE(39)] = 717,
  [SMALL_STATE(40)] = 730,
  [SMALL_STATE(41)] = 739,
  [SMALL_STATE(42)] = 752,
  [SMALL_STATE(43)] = 765,
  [SMALL_STATE(44)] = 778,
  [SMALL_STATE(45)] = 791,
  [SMALL_STATE(46)] = 798,
  [SMALL_STATE(47)] = 805,
  [SMALL_STATE(48)] = 812,
  [SMALL_STATE(49)] = 819,
  [SMALL_STATE(50)] = 826,
  [SMALL_STATE(51)] = 833,
  [SMALL_STATE(52)] = 840,
  [SMALL_STATE(53)] = 847,
  [SMALL_STATE(54)] = 854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__return_expectation, 2, .production_id = 10),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__return_expectation, 2, .production_id = 10), SHIFT_REPEAT(37),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__return_expectation, 2, .production_id = 10), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgroup, 2, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2), SHIFT_REPEAT(44),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2), SHIFT_REPEAT(51),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subgroup_repeat1, 2), SHIFT_REPEAT(48),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgroup, 1, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__capture_output, 2, .production_id = 8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__return_expectation, 1, .production_id = 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_value_expectation, 2, .production_id = 9),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__return_expectation, 1, .production_id = 6),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__c_code, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_alias_definition, 3, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(49),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subgroup_line, 2, .production_id = 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expectable_value, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expectation, 3, .production_id = 11),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
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
