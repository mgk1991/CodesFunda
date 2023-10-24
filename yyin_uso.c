    /* Declaraciones */
%%
    /* Reglas */
%%
    /* Auxiliar */
main()
{
  FILE *fp = fopen("filename", "r");
	if(fp)
	  yyin = fp;
	yylex();
	return 1;
}
