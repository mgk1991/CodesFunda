%token H, O, L, A 

%{ 
#include <stdio.h> 
#define H 257 
#define O 258 
#define L 259 
#define A 260 
#include “lex.yy.c”
yyerror (char *s) { 
 fprintf (stderr, “%s\n”, s) ; 
} 
%} 

%% 
S : H O L A '\n' ; 
%% 

main() { 
 yyparse(); 
}

%{ 
#define H 257 
#define O 258 
#define L 259 
#define A 260 
%} 
%% 
[ \t]+ ; 
[Hh] return H; 
[Oo] return O; 
[Ll] return L; 
[Aa] return A; 
. | 
\n return yytext[0];
