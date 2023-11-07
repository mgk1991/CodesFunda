0 $accept : hola $end 
1 hola : H letra_o L A 
2 letra_o : O 
3 | letra_o O 
state 0 
 $accept : . hola $end (0) 
 H shift 1 
 . error 
 hola goto 2 
state 1 
 hola : H . letra_o L A (1) 
 O shift 3 
 . error 
 letra_o goto 4
state 2 
 $accept : hola . $end (0) 
 $end accept 
state 3 
 letra_o : O . (2) 
 . reduce 2 
state 4 
 hola : H letra_o . L A (1) 
 letra_o : letra_o . O (3) 
 O shift 5 
 L shift 6 
 . error 
state 5 
 letra_o : letra_o O . (3) 
 . reduce 3 
state 6 
 hola : H letra_o L . A (1) 
 A shift 7 
 . error 
state 7 
 hola : H letra_o L A . (1) 
 . reduce 1 
6 terminals, 3 nonterminals 
4 grammar rules, 8 states
