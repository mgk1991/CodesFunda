%union { 
cuerpo de la unión... 
}

typedef union { 
 cuerpo de la unión... 
 } YYSTYPE

%union { 
 	double valor; 
 int indice; 
 } 
%token <valor> NUMERO 
%type <valor> exp
