%{ 
#include <stdio.h> 
yyerror (char *s) 
{ 
 fprintf (stderr, “%s\n”, s) ;  // error estandar
} 
%} 

%% 

S : 'H' 'o' 'l' 'a' '\n' ; 

%% 

yylex()			 { /* código de yylex proporcionado directamente */ 
 return (getchar()) ; 	/* devuelve el propio código (ASCII) del carácter */ 
} 
main() 
{ 
 yyparse(); 
}
