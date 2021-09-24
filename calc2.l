%{
#include <iostream>
#include <stdlib.h>
#include "calc2.tab.h"  /* We want the tokens defined in calc2.y. */
%}

%option noyywrap

%%

                        /* 'val' in 'yylval.val' is the field declared in
                           calc2.y with the %union directive. */
   //[0-9]+(\.[0-9]+)?       {sscanf(yytext, "%lf", &yylval); return NUM;}
   //[0-9]+\.[0-9]+ 	      { yylval.fval = atof(yytext); return NUM; }
[0-9]+                  { yylval.val = atoi(yytext); return NUM; }
[0-9]+\.[0-9]+ 	      {yylval.val = atof(yytext); return NUM; }
"+"                     { return PLUS; }
"-"                     { return MINUS; }
"*"                     { return MUL; }
"/"                     { return DIV; }
"%"                     { return MOD; }
"^"                     { return POW; }
"("                     { return LPAREN; }
")"                     { return RPAREN; }
"="                     { return EQUALS; }
"sqrt"|"SQRT"           { return SQRT; }
"!"                     {return FACTORIAL; }
"abs"|"ABS"             { return ABS; }
"floor"|"FLOOR"         { return FLOOR; }
"ceil"|"CEIL"           { return CEIL;}
"log10"|"LOG10"         { return LOG10; }
"log2"|"LOG2"           { return LOG2; }
"sin"|"SIN"             { return SIN; }
"cos"|"COS"             { return COS; }
"tan"|"TAN"             { return TAN; }
"PI"                    { return PI; }
"gbp_to_usd"|"GBP_TO_USD"   { return GBP_TO_USD; }  
"usd_to_gbp"|"USD_TO_GBP"   { return USD_TO_GBP; }
"gbp_to_euro"|"GBP_TO_EURO" { return GBP_TO_EURO; }
"euro_to_gbp"|"EURO_TO_GBP" { return EURO_TO_GBP; }
"usd_to_euro"|"USD_TO_EURO" { return USD_TO_EURO; }
"euro_to_usd"|"EURO_TO_USD" { return EURO_TO_USD; }
"cel_to_fah"|"CEL_TO_FAH"   { return CEL_TO_FAH; }
"fah_to_cel"|"FAH_TO_CEL"   { return FAH_TO_CEL; }
"mi_to_km"|"MI_TO_KM"       { return MI_TO_KM; }
"km_to_mi"|"KM_TO_MI"       { return KM_TO_MI; }
"VAR"|"var"                 { return VARIABLE_KEYWORD; }
[a-zA-Z]+[0-9]+                      { return VARIABLE; }
[ \t\r\n]+              { /* Ignore white characters. */ }
.                       { std::cerr << "Invalid token" << std::endl; exit(1); }
%%

/// WARNING!!!!!!!! CORRECT FOR FLOAT INPUT!!!!!