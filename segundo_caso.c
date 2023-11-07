%{ 
#include <stdio.h> 
yyerror (char *s) {
 fprintf (stderr, “%s\n”, s) ; 
} 
%} 
%token H, O, L, A 
%% 
S : H O L A '\n' ; 
%% 
main() { 
 yyparse(); 
}

%{ 
#include “y.tab.h” 
%} 
%% 
[ \t]+ ; 
[Hh] return H; 
[Oo] return O; 
[Ll] return L; 
[Aa] return A; 
. | 
\n return yytext[0];
