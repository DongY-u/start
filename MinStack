import java.util.Stack;

public class MinStack {
    Stack<Integer> st;
    Stack<Integer> minSt;
    /** initialize your data structure here. */
    public MinStack() {
        st = new Stack<>();
        minSt = new Stack<>();
    }

    public void push(int x) {
        if(minSt.isEmpty() || x <= minSt.peek()){
            minSt.push(x);
        }
        st.push(x);
    }

    public void pop() {
        int ret = st.peek();
        //自动拆箱
        if(ret == minSt.peek()){
            minSt.pop();
        }
        st.pop();
    }

    public int top() {
        return st.peek();
    }

    public int getMin() {
        return minSt.peek();
    }
}
