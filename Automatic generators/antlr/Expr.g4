grammar Expr;

prog: stat+
    ;

stat: ID '=' expr ENDL  # assign
    | ENDL              # blank
    ;

expr: expr op=('*'|'/') expr  # MulDiv
    | expr op=('+'|'-') expr  # AddSub
    | INT                     # int
    | ID                      # id
    | '(' expr ')'            # parens
    ;

MUL  : '*' ;
DIV  : '/' ;
ADD  : '+' ;
SUB  : '-' ;
OPEN : '(' ;
CLOSE: ')' ;
ASS  : '=' ;
ID   : [a-z]+ ;
INT  : [0-9]+ ;
ENDL : '\r'? '\n' ;
WS   : [ \t]+ -> skip ;
