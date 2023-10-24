/* Declaraciones */
%{
int count = 0; // variable global del programa en C
%}

/* Reglas */
%%
  /* patrón 1 */
[A-Z] {printf("%s es mayúscula\n", yytext);
      count++;}
      
  /* patrón 2 */
.	 {printf("%s no es mayúscula\n", yytext);}

  /* patrón 3 (escape) */
\n {return 0;}
%%

/* Auxiliar */
int yywrap(){} /* función especial del compiler lex */
int main(){
  yylex();
  printf("\nLa cadena tiene %d letras mayúsculas\n", count);
return 0;
}
