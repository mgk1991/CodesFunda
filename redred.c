%token CART PLOW AND HORSE GOAT OX 
%% 
phrase :	 cart_animal AND CART 
 | work_animal AND PLOW 
 ; 
cart_animal : 	HORSE 
 | GOAT 
 ; 
work_animal : HORSE 
 		| OX 
 ;

phrase :	 cart_animal CART 
 | work_animal PLOW 
 ; 
cart_animal : 	HORSE AND 
 		| GOAT AND 
 ; 
work_animal :	 HORSE AND 
 		| OX AND 
 ;
