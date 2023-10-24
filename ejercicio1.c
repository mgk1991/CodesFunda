%option noyywrap
%{
	#include<stdio.h>
%}
DIGITOS    [0-9]+
MINUSCULAS [a-z]+
MAYUSCULAS [A-Z]+


%%

"0"|"1"        {printf("CERO/UNO");}
{DIGITOS}      {printf("Numero Entero");}
{MINUSCULAS}   {printf("Palabra(s) Minuscula(s)");}
{MAYUSCULAS}   {printf("Palabra(s) Mayuscula(s)");}


%%

int main()
{
	yyin=stdin;
	yylex();
	return 0;
}
