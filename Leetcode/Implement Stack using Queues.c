/******************

Implement the following operations of a stack using queues.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
empty() -- Return whether the stack is empty.

Notes:
1. You must use only standard operations of a queue -- which means only push to back, peek/pop from front, size, and is empty operations are valid.

2. Depending on your language, queue may not be supported natively. You may simulate a queue by using a list or deque (double-ended queue), as long as you use only standard operations of a queue.

3. You may assume that all operations are valid (for example, no pop or top operations will be called on an empty stack).

******************/


class MyStack {
    
    Queue<Integer> queue1 = new LinkedList<Integer>();
    Queue<Integer> queue2 = new LinkedList<Integer>();

    // Push element x onto stack.
    public void push(int x) {
        while(!queue1.isEmpty())
            queue2.add(queue1.remove());
        queue1.add(x);
        while(!queue2.isEmpty())
            queue1.add(queue2.remove());
    }

    // Removes the element on top of the stack.
    public void pop() {
        if (!queue1.isEmpty())
            queue1.remove();
    }

    // Get the top element.
    public int top() {
        
        if(!queue1.isEmpty())
            return queue1.element();
        
        return 0;
        
    }

    // Return whether the stack is empty.
    public boolean empty() {
        return(queue1.isEmpty() ? true : false);
    }
}