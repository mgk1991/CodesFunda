%{ 
#include <stdio.h> 
yyerror (char *s) { 
 fprintf (stderr, “%s\n”, s) ; 
} 
%}
%% 
I : S ‘\n’ {printf (“Correcto\n”);} 
 ; 
S : ‘(‘ S ‘)’ S {printf (“S -> (S)S\n”);} 
 | {printf (“S -> epsilon\n”);} 
 ; 
%% 
yylex() { /* código de yylex proporcionado directamente */ 
 return (getchar()) ; /* devuelve el propio código (ASCII) del 
carácter */ 
} 
main() { 
 yyparse(); }
