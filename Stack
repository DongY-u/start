import java.util.Arrays;

public class Stack {
    //顺序表实现
    private int[] array;
    private int size;
    public Stack(int n){
        array = new int[n];
        size = 0;
    }

    public void push(int value){
        //检查容量
        if(size == array.length){
            //增容： 申请空间， 拷贝
            array = Arrays.copyOf(array, 2 * size);
        }
        //尾插
        array[size++] = value;
    }

    public void pop(){
        if(size > 0)
            --size;
    }

    public int peek(){
        return array[size - 1];
    }

    public int size(){
        return size;
    }
    public boolean empty(){
        return size == 0;
    }

    public static void main(String[] args) {
        Stack st = new Stack(2);
        System.out.println(st.size());
        System.out.println(st.empty());
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);
        System.out.println(st.size());
        System.out.println(st.empty());
        System.out.println("top: " + st.peek());

        System.out.println("遍历:");
        while(!st.empty()){
            System.out.print(st.peek() + " ");
            st.pop();
        }
        System.out.println();
        System.out.println(st.size());
        System.out.println(st.empty());
    }
}
