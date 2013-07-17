/* Generated by re2c 0.13.5 on Wed Jul 17 13:44:40 2013 */
// 1 "scanner.re"


#include "string.h"
#include "scanner.h"

#define YYCTYPE unsigned char
#define YYCURSOR (s->start)
#define YYLIMIT (s->end)
#define YYMARKER q

int xx_get_token(xx_scanner_state *s, xx_scanner_token *token) {

	char next, *q = YYCURSOR, *start = YYCURSOR;
	int status = XX_SCANNER_RETCODE_IMPOSSIBLE;

	while (XX_SCANNER_RETCODE_IMPOSSIBLE == status) {

		
// 22 "scanner.c"
		{
			YYCTYPE yych;
			unsigned int yyaccept = 0;

			yych = *YYCURSOR;
			switch (yych) {
			case 0x00:	goto yy49;
			case '\t':
			case '\r':
			case ' ':	goto yy45;
			case '\n':	goto yy47;
			case '"':	goto yy18;
			case '\'':	goto yy19;
			case '(':	goto yy23;
			case ')':	goto yy25;
			case ',':	goto yy43;
			case '-':	goto yy2;
			case '/':	goto yy20;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy4;
			case ':':	goto yy39;
			case ';':	goto yy41;
			case '=':	goto yy37;
			case '@':	goto yy35;
			case 'A':
			case 'G':
			case 'H':
			case 'J':
			case 'K':
			case 'M':
			case 'O':
			case 'Q':
			case 'R':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case 'a':
			case 'g':
			case 'h':
			case 'j':
			case 'k':
			case 'm':
			case 'o':
			case 'q':
			case 'r':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy22;
			case 'B':
			case 'b':	goto yy16;
			case 'C':
			case 'c':	goto yy10;
			case 'D':
			case 'd':	goto yy15;
			case 'E':
			case 'e':	goto yy11;
			case 'F':
			case 'f':	goto yy8;
			case 'I':
			case 'i':	goto yy14;
			case 'L':
			case 'l':	goto yy13;
			case 'N':
			case 'n':	goto yy6;
			case 'P':
			case 'p':	goto yy12;
			case 'S':
			case 's':	goto yy17;
			case 'T':
			case 't':	goto yy9;
			case '[':	goto yy31;
			case '\\':
			case '_':	goto yy21;
			case ']':	goto yy33;
			case '{':	goto yy27;
			case '}':	goto yy29;
			default:	goto yy51;
			}
yy2:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy156;
			default:	goto yy3;
			}
yy3:
// 218 "scanner.re"
			{
			status = XX_SCANNER_RETCODE_ERR;
			break;
		}
// 136 "scanner.c"
yy4:
			yyaccept = 0;
			yych = *(YYMARKER = ++YYCURSOR);
			goto yy157;
yy5:
// 23 "scanner.re"
			{
			token->opcode = XX_T_INTEGER;
			token->value = strndup(start, YYCURSOR - start);
			token->len = YYCURSOR - start;
			q = YYCURSOR;
			return 0;
		}
// 150 "scanner.c"
yy6:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 'A':
			case 'a':	goto yy142;
			case 'U':
			case 'u':	goto yy143;
			default:	goto yy55;
			}
yy7:
// 139 "scanner.re"
			{
			token->opcode = XX_T_IDENTIFIER;
			token->value = strndup(start, YYCURSOR - start);
			token->len = YYCURSOR - start;
			q = YYCURSOR;
			return 0;
		}
// 169 "scanner.c"
yy8:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'A':
			case 'a':	goto yy127;
			case 'N':
			case 'n':	goto yy128;
			case 'U':
			case 'u':	goto yy130;
			default:	goto yy55;
			}
yy9:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'R':
			case 'r':	goto yy123;
			default:	goto yy55;
			}
yy10:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy118;
			default:	goto yy55;
			}
yy11:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy107;
			case 'X':
			case 'x':	goto yy108;
			default:	goto yy55;
			}
yy12:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'R':
			case 'r':	goto yy92;
			case 'U':
			case 'u':	goto yy93;
			default:	goto yy55;
			}
yy13:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy89;
			default:	goto yy55;
			}
yy14:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'N':
			case 'n':	goto yy86;
			default:	goto yy55;
			}
yy15:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy80;
			default:	goto yy55;
			}
yy16:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy76;
			default:	goto yy55;
			}
yy17:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy70;
			default:	goto yy55;
			}
yy18:
			yyaccept = 1;
			yych = *(YYMARKER = ++YYCURSOR);
			if (yych <= 0x00) goto yy3;
			goto yy68;
yy19:
			yyaccept = 1;
			yych = *(YYMARKER = ++YYCURSOR);
			if (yych <= 0x00) goto yy3;
			goto yy63;
yy20:
			yyaccept = 1;
			yych = *(YYMARKER = ++YYCURSOR);
			switch (yych) {
			case '*':	goto yy56;
			default:	goto yy3;
			}
yy21:
			yych = *++YYCURSOR;
			goto yy55;
yy22:
			yych = *++YYCURSOR;
			goto yy55;
yy23:
			++YYCURSOR;
// 147 "scanner.re"
			{
			token->opcode = XX_T_PARENTHESES_OPEN;
			return 0;
		}
// 278 "scanner.c"
yy25:
			++YYCURSOR;
// 152 "scanner.re"
			{
			token->opcode = XX_T_PARENTHESES_CLOSE;
			return 0;
		}
// 286 "scanner.c"
yy27:
			++YYCURSOR;
// 157 "scanner.re"
			{
			token->opcode = XX_T_BRACKET_OPEN;
			return 0;
		}
// 294 "scanner.c"
yy29:
			++YYCURSOR;
// 162 "scanner.re"
			{
			token->opcode = XX_T_BRACKET_CLOSE;
			return 0;
		}
// 302 "scanner.c"
yy31:
			++YYCURSOR;
// 167 "scanner.re"
			{
			token->opcode = XX_T_SBRACKET_OPEN;
			return 0;
		}
// 310 "scanner.c"
yy33:
			++YYCURSOR;
// 172 "scanner.re"
			{
			token->opcode = XX_T_SBRACKET_CLOSE;
			return 0;
		}
// 318 "scanner.c"
yy35:
			++YYCURSOR;
// 177 "scanner.re"
			{
			token->opcode = XX_T_AT;
			return 0;
		}
// 326 "scanner.c"
yy37:
			++YYCURSOR;
// 182 "scanner.re"
			{
			token->opcode = XX_T_ASSIGN;
			return 0;
		}
// 334 "scanner.c"
yy39:
			++YYCURSOR;
// 187 "scanner.re"
			{
			token->opcode = XX_T_COLON;
			return 0;
		}
// 342 "scanner.c"
yy41:
			++YYCURSOR;
// 192 "scanner.re"
			{
			token->opcode = XX_T_DOTCOMMA;
			return 0;
		}
// 350 "scanner.c"
yy43:
			++YYCURSOR;
// 197 "scanner.re"
			{
			token->opcode = XX_T_COMMA;
			return 0;
		}
// 358 "scanner.c"
yy45:
			++YYCURSOR;
			yych = *YYCURSOR;
			goto yy53;
yy46:
// 202 "scanner.re"
			{
			token->opcode = XX_T_IGNORE;
			return 0;
		}
// 369 "scanner.c"
yy47:
			++YYCURSOR;
// 207 "scanner.re"
			{
			s->active_line++;
			token->opcode = XX_T_IGNORE;
			return 0;
		}
// 378 "scanner.c"
yy49:
			++YYCURSOR;
// 213 "scanner.re"
			{
			status = XX_SCANNER_RETCODE_EOF;
			break;
		}
// 386 "scanner.c"
yy51:
			yych = *++YYCURSOR;
			goto yy3;
yy52:
			++YYCURSOR;
			yych = *YYCURSOR;
yy53:
			switch (yych) {
			case '\t':
			case '\r':
			case ' ':	goto yy52;
			default:	goto yy46;
			}
yy54:
			++YYCURSOR;
			yych = *YYCURSOR;
yy55:
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy7;
			}
yy56:
			++YYCURSOR;
			yych = *YYCURSOR;
			switch (yych) {
			case 0x00:	goto yy58;
			case '*':	goto yy59;
			default:	goto yy56;
			}
yy58:
			YYCURSOR = YYMARKER;
			switch (yyaccept) {
			case 0: 	goto yy5;
			case 1: 	goto yy3;
			}
yy59:
			yych = *++YYCURSOR;
			switch (yych) {
			case '/':	goto yy60;
			default:	goto yy58;
			}
yy60:
			++YYCURSOR;
// 130 "scanner.re"
			{
			token->opcode = XX_T_COMMENT;
			token->value = strndup(q, YYCURSOR - q - 1);
			token->len = YYCURSOR - q - 1;
			q = YYCURSOR;
			return 0;
		}
// 501 "scanner.c"
yy62:
			++YYCURSOR;
			yych = *YYCURSOR;
yy63:
			switch (yych) {
			case 0x00:	goto yy58;
			case '\'':	goto yy65;
			case '\\':	goto yy64;
			default:	goto yy62;
			}
yy64:
			++YYCURSOR;
			yych = *YYCURSOR;
			switch (yych) {
			case '\n':	goto yy58;
			default:	goto yy62;
			}
yy65:
			++YYCURSOR;
// 121 "scanner.re"
			{
			token->opcode = XX_T_STRING;
			token->value = strndup(q, YYCURSOR - q - 1);
			token->len = YYCURSOR - q - 1;
			q = YYCURSOR;
			return 0;
		}
// 529 "scanner.c"
yy67:
			++YYCURSOR;
			yych = *YYCURSOR;
yy68:
			switch (yych) {
			case 0x00:	goto yy58;
			case '"':	goto yy65;
			case '\\':	goto yy69;
			default:	goto yy67;
			}
yy69:
			++YYCURSOR;
			yych = *YYCURSOR;
			switch (yych) {
			case '\n':	goto yy58;
			default:	goto yy67;
			}
yy70:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'R':
			case 'r':	goto yy71;
			default:	goto yy55;
			}
yy71:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy72;
			default:	goto yy55;
			}
yy72:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'N':
			case 'n':	goto yy73;
			default:	goto yy55;
			}
yy73:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'G':
			case 'g':	goto yy74;
			default:	goto yy55;
			}
yy74:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy75;
			}
yy75:
// 115 "scanner.re"
			{
			token->opcode = XX_T_TYPE_STRING;
			return 0;
		}
// 650 "scanner.c"
yy76:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy77;
			default:	goto yy55;
			}
yy77:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy78;
			default:	goto yy55;
			}
yy78:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy79;
			}
yy79:
// 110 "scanner.re"
			{
			token->opcode = XX_T_TYPE_BOOL;
			return 0;
		}
// 740 "scanner.c"
yy80:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'U':
			case 'u':	goto yy81;
			default:	goto yy55;
			}
yy81:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'B':
			case 'b':	goto yy82;
			default:	goto yy55;
			}
yy82:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy83;
			default:	goto yy55;
			}
yy83:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy84;
			default:	goto yy55;
			}
yy84:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy85;
			}
yy85:
// 105 "scanner.re"
			{
			token->opcode = XX_T_TYPE_DOUBLE;
			return 0;
		}
// 844 "scanner.c"
yy86:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy87;
			default:	goto yy55;
			}
yy87:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy88;
			}
yy88:
// 100 "scanner.re"
			{
			token->opcode = XX_T_TYPE_INTEGER;
			return 0;
		}
// 927 "scanner.c"
yy89:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy90;
			default:	goto yy55;
			}
yy90:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy91;
			}
yy91:
// 90 "scanner.re"
			{
			token->opcode = XX_T_LET;
			return 0;
		}
// 1010 "scanner.c"
yy92:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy99;
			default:	goto yy55;
			}
yy93:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'B':
			case 'b':	goto yy94;
			default:	goto yy55;
			}
yy94:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy95;
			default:	goto yy55;
			}
yy95:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy96;
			default:	goto yy55;
			}
yy96:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy97;
			default:	goto yy55;
			}
yy97:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy98;
			}
yy98:
// 70 "scanner.re"
			{
			token->opcode = XX_T_PUBLIC;
			return 0;
		}
// 1121 "scanner.c"
yy99:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy100;
			default:	goto yy55;
			}
yy100:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy101;
			default:	goto yy55;
			}
yy101:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy102;
			default:	goto yy55;
			}
yy102:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy103;
			default:	goto yy55;
			}
yy103:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy104;
			default:	goto yy55;
			}
yy104:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'D':
			case 'd':	goto yy105;
			default:	goto yy55;
			}
yy105:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy106;
			}
yy106:
// 75 "scanner.re"
			{
			token->opcode = XX_T_PROTECTED;
			return 0;
		}
// 1239 "scanner.c"
yy107:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'H':
			case 'h':	goto yy115;
			default:	goto yy55;
			}
yy108:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy109;
			default:	goto yy55;
			}
yy109:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy110;
			default:	goto yy55;
			}
yy110:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'N':
			case 'n':	goto yy111;
			default:	goto yy55;
			}
yy111:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'D':
			case 'd':	goto yy112;
			default:	goto yy55;
			}
yy112:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'S':
			case 's':	goto yy113;
			default:	goto yy55;
			}
yy113:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy114;
			}
yy114:
// 65 "scanner.re"
			{
			token->opcode = XX_T_EXTENDS;
			return 0;
		}
// 1357 "scanner.c"
yy115:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy116;
			default:	goto yy55;
			}
yy116:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy117;
			}
yy117:
// 95 "scanner.re"
			{
			token->opcode = XX_T_ECHO;
			return 0;
		}
// 1440 "scanner.c"
yy118:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'A':
			case 'a':	goto yy119;
			default:	goto yy55;
			}
yy119:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'S':
			case 's':	goto yy120;
			default:	goto yy55;
			}
yy120:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'S':
			case 's':	goto yy121;
			default:	goto yy55;
			}
yy121:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy122;
			}
yy122:
// 60 "scanner.re"
			{
			token->opcode = XX_T_CLASS;
			return 0;
		}
// 1537 "scanner.c"
yy123:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'U':
			case 'u':	goto yy124;
			default:	goto yy55;
			}
yy124:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy125;
			default:	goto yy55;
			}
yy125:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy126;
			}
yy126:
// 50 "scanner.re"
			{
			token->opcode = XX_T_TRUE;
			return 0;
		}
// 1627 "scanner.c"
yy127:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy138;
			default:	goto yy55;
			}
yy128:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy129;
			}
yy129:
// 85 "scanner.re"
			{
			token->opcode = XX_T_FUNCTION;
			return 0;
		}
// 1710 "scanner.c"
yy130:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'N':
			case 'n':	goto yy131;
			default:	goto yy55;
			}
yy131:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy132;
			default:	goto yy55;
			}
yy132:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy133;
			default:	goto yy55;
			}
yy133:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy134;
			default:	goto yy55;
			}
yy134:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy135;
			default:	goto yy55;
			}
yy135:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'N':
			case 'n':	goto yy136;
			default:	goto yy55;
			}
yy136:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy137;
			}
yy137:
// 80 "scanner.re"
			{
			token->opcode = XX_T_FUNCTION;
			return 0;
		}
// 1828 "scanner.c"
yy138:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'S':
			case 's':	goto yy139;
			default:	goto yy55;
			}
yy139:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy140;
			default:	goto yy55;
			}
yy140:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy141;
			}
yy141:
// 45 "scanner.re"
			{
			token->opcode = XX_T_FALSE;
			return 0;
		}
// 1918 "scanner.c"
yy142:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'M':
			case 'm':	goto yy147;
			default:	goto yy55;
			}
yy143:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy144;
			default:	goto yy55;
			}
yy144:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy145;
			default:	goto yy55;
			}
yy145:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy146;
			}
yy146:
// 40 "scanner.re"
			{
			token->opcode = XX_T_NULL;
			return 0;
		}
// 2015 "scanner.c"
yy147:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy148;
			default:	goto yy55;
			}
yy148:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'S':
			case 's':	goto yy149;
			default:	goto yy55;
			}
yy149:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'P':
			case 'p':	goto yy150;
			default:	goto yy55;
			}
yy150:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'A':
			case 'a':	goto yy151;
			default:	goto yy55;
			}
yy151:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy152;
			default:	goto yy55;
			}
yy152:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy153;
			default:	goto yy55;
			}
yy153:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy54;
			default:	goto yy154;
			}
yy154:
// 55 "scanner.re"
			{
			token->opcode = XX_T_NAMESPACE;
			return 0;
		}
// 2133 "scanner.c"
yy155:
			yych = *++YYCURSOR;
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy158;
			default:	goto yy58;
			}
yy156:
			yyaccept = 0;
			YYMARKER = ++YYCURSOR;
			yych = *YYCURSOR;
yy157:
			switch (yych) {
			case '.':	goto yy155;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy156;
			default:	goto yy5;
			}
yy158:
			++YYCURSOR;
			yych = *YYCURSOR;
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy158;
			default:	goto yy160;
			}
yy160:
// 32 "scanner.re"
			{
			token->opcode = XX_T_DOUBLE;
			token->value = strndup(start, YYCURSOR - start);
			token->len = YYCURSOR - start;
			q = YYCURSOR;
			return 0;
		}
// 2193 "scanner.c"
		}
// 223 "scanner.re"

	}

	return status;
}
