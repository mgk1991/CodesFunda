%union { 
 double valor; 
 int indice; 
 } 
... 
yylval.valor = 5.8; 
yylval.indice = 7;

yylex (){ 
 extern int yylval; 
 int c; 
 … 
 c = getchar(); 
 … 
 switch (c){ 
 case ‘0’: 
 case ‘1’: 
 … 
 case ‘9’: yylval = c-‘0’; /*valor semántico asociado al token*/ 
 return (DIGITO); /*tipode token*/ 
 } 
}
