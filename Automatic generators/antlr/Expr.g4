grammar Expr;

prog: stat+
    ;

stat: ID ASS expr SEM ENDL       # assign
    | ENDL                       # blank
    ;

expr: expr op=(MUL|DIV) expr     # MulDiv
    | expr op=(ADD|SUB) expr     # AddSub
    | op=SUB expr                # unar
    | expr POW<assoc=right> expr # power
    | INT                        # int
    | ID                         # id
    | OPEN expr CLOSE            # parens
    ;

MUL  : '*' ;
DIV  : '/' ;
ADD  : '+' ;
SUB  : '-' ;
POW  : '^' ;
ASS  : '=' ;
OPEN : '(' ;
CLOSE: ')' ;
SEM  : ';' ;
ID   : [a-z]+ ;
INT  : [0-9]+ ;
ENDL : '\r'? '\n' ;
WS   : [ \t]+ -> skip ;
