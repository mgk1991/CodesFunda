stat	 :	IF 		‘(‘ cond ‘)’	 stat 
 : 	IF		 ‘(‘ cond ‘)’ 	stat ELSE stat 
 ; 

%token DIG 
%% 
E :	 E ‘+’ E 
 | DIG 
 ; 
