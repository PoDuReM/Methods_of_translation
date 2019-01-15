import java.util.HashMap;
import java.util.Map;

public class Visitor extends ExprBaseVisitor<Integer> {
    /** "memory" for our calculator; variable/value pairs go here */
    Map<String, Integer> memory = new HashMap<String, Integer>();

    /** ID '=' expr ENDL */
    @Override
    public Integer visitAssign(ExprParser.AssignContext ctx) {
        String id = ctx.ID().getText(); // id is left-hand side of '='
        int value = visit(ctx.expr()); // compute value of expression on right
        System.out.print(id + " = ");
        System.out.println(value);
        memory.put(id, value); // store it in our memory
        return value;
    }

    /** INT */
    @Override
    public Integer visitInt(ExprParser.IntContext ctx) {
        return Integer.valueOf(ctx.INT().getText());
    }

    /** ID */
    @Override
    public Integer visitId(ExprParser.IdContext ctx) {
        String id = ctx.ID().getText();
        if (memory.containsKey(id)) return memory.get(id);
        return 0;
    }

    /** POW */
    @Override
    public Integer visitPower(ExprParser.PowerContext ctx) {
        int left = visit(ctx.expr(0));
        int right = visit(ctx.expr(1));
        return (int)Math.pow((double)left, (double)right);
    }

    /** UNAR */
    @Override
    public Integer visitUnar(ExprParser.UnarContext ctx) {
        int value = visit(ctx.expr());
        return -value;
    }

    /** expr op=('*'|'/') expr */
    @Override
    public Integer visitMulDiv(ExprParser.MulDivContext ctx) {
        int left = visit(ctx.expr(0)); // get value of left subexpression
        int right = visit(ctx.expr(1)); // get value of right subexpression
        if ( ctx.op.getType() == ExprParser.MUL ) return left * right;
        return left / right; // must be DIV
    }

    /** expr op=('+'|'-') expr */
    @Override
    public Integer visitAddSub(ExprParser.AddSubContext ctx) {
        int left = visit(ctx.expr(0)); // get value of left subexpression
        int right = visit(ctx.expr(1)); // get value of right subexpression
        if ( ctx.op.getType() == ExprParser.ADD ) return left + right;
        return left - right; // must be SUB
    }

    /** '(' expr ')' */
    @Override
    public Integer visitParens(ExprParser.ParensContext ctx) {
        return visit(ctx.expr()); // return child expr's value
    }
}
