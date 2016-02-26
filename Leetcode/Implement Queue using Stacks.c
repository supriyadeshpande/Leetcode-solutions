/******************

Implement the following operations of a queue using stacks.

push(x) -- Push element x to the back of queue.
pop() -- Removes the element from in front of queue.
peek() -- Get the front element.
empty() -- Return whether the queue is empty.

Notes:
1. You must use only standard operations of a stack -- which means only push to top, peek/pop from top, size, and is empty operations are valid.
2. Depending on your language, stack may not be supported natively. You may simulate a stack by using a list or deque (double-ended queue), as long as you use only standard operations of a stack.
3. You may assume that all operations are valid (for example, no pop or peek operations will be called on an empty queue).

******************/


class MyQueue {
    // Push element x to the back of queue.
    
    Stack<Integer> stack1 = new Stack<Integer>();
    Stack<Integer> stack2 = new Stack<Integer>();
    
    public void push(int x) {
        while(!stack2.empty())
            stack1.push(stack2.pop());
        stack1.push(x);
        while(!stack1.empty())
            stack2.push(stack1.pop());
        
    }

    // Removes the element from in front of queue.
    public void pop() {
        if(!stack2.empty())
            stack2.pop();
        
    }

    // Get the front element.
    public int peek() {
        if(!stack2.empty())
            return(stack2.peek());
        return 0;
    }

    // Return whether the queue is empty.
    public boolean empty() {
        return stack2.empty();
    }
}