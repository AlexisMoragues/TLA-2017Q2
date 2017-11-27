#define print 257
#define exit_command 258
#define nota 259
#define subir_nota 260
#define bajar_nota 261
#define trasponer_token 262
#define number 263
#define identifier 264
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {int num; char* id;} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
