%token NUM 
%left ‘+’ 
%% 
exp : 	exp	‘+’	exp 	{$$ = $1+$3} 
 	| NUM 			{SS = $!} 
 ;

%right	 ‘=’ /*menor precedencia*/ 
%left	 ‘+’,	 ‘-‘ 
%left 	‘*’,	 ‘/’	 /*mayor precedencia*/ 
%% 
Exp	 : exp 	‘=’	 exp 
 	| exp 	‘+’	 exp 
 | exp	‘-’ 	exp 
 	| exp 	‘*’ 	exp 
 | exp	 ‘/’ 	exp 
 | ‘-‘	 exp	 %	pred 	‘*’ 
 	| CAR 
 ;
