%% 
S : exp ‘\n’ 	{printf (“Resultado: %d\n”, $1);} 
 ; 
exp : exp ‘+’ exp {$$ = $1+$3} 
 | exp ‘-’ exp {$$ = $1-$3} 
 | ’(‘ exp ‘)’ {$$ = $2} 
 | NUM {$$ = $1} 
 ; 
%%
