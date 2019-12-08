import java.util.LinkedList;
import java.util.Queue;

public class MyStack {
    Queue<Integer> queue;
    /** Initialize your data structure here. */
    public MyStack() {
        queue = new LinkedList<>();
    }

    /** Push element x onto stack. */
    public void push(int x) {
        queue.offer(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    public int pop() {
        int sz = queue.size();
        while(sz > 1){
            queue.offer(queue.poll());
            --sz;
        }
        return queue.poll();

    }

    /** Get the top element. */
    public int top() {
        int sz = queue.size();
        while(sz > 1){
            queue.offer(queue.poll());
            --sz;
        }
        int ret =  queue.poll();
        queue.offer(ret);
        return ret;
    }
    /** Returns whether the stack is empty. */
    public boolean empty() {
        return queue.isEmpty();
    }
}

class MyStack2 {
    Queue<Integer> queue1;
    Queue<Integer> queue2;
    /** Initialize your data structure here. */
    public MyStack2() {
        queue1 = new LinkedList<>();
        queue2 = new LinkedList<>();
    }

    /** Push element x onto stack. */
    public void push(int x) {
        if(queue1.isEmpty()){
            queue2.offer(x);
        }
        else{
            queue1.offer(x);
        }

    }

    /** Removes the element on top of the stack and returns that element. */
    public int pop() {
        int ret = 0;
        if(queue1.isEmpty()){
            int sz = queue2.size();
            while(sz > 1){
                queue1.offer(queue2.poll());
                --sz;
            }
            ret = queue2.poll();
        }
        else{
            int sz = queue1.size();
            while(sz > 1){
                queue2.offer(queue1.poll());
                --sz;
            }
            ret = queue1.poll();
        }
        return ret;
    }

    /** Get the top element. */
    public int top() {
        int ret = pop();
        push(ret);
        return ret;
    }
    /** Returns whether the stack is empty. */
    public boolean empty() {
        return queue1.isEmpty() && queue2.isEmpty();
    }

    public static void main(String[] args) {
        MyStack2 st = new MyStack2();
        st.push(1);
        System.out.println(st.pop());
    }
}
