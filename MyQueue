import java.util.Stack;

public class MyQueue {
        Stack<Integer> pushSt;
        Stack<Integer> popSt;
        /** Initialize your data structure here. */
        public MyQueue() {
            pushSt = new Stack<>();
            popSt = new Stack<>();
        }

        /** Push element x to the back of queue. */
        public void push(int x) {
            pushSt.push(x);
        }

        /** Removes the element from in front of queue and returns that element. */
        public int pop() {
            if(popSt.isEmpty()){
                int sz = pushSt.size();
                for(int i = 0; i < sz; ++i){
                    popSt.push(pushSt.pop());
                }
            }
            return popSt.pop();
        }

        /** Get the front element. */
        public int peek() {
            if(popSt.isEmpty()){
                int sz = pushSt.size();
                for(int i = 0; i < sz; ++i){
                    popSt.push(pushSt.pop());
                }
            }
            return popSt.peek();
        }

        /** Returns whether the queue is empty. */
        public boolean empty() {
            return pushSt.isEmpty() && popSt.isEmpty();
        }
}
