/******************

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.

******************/


class MinStack {
    
    Stack<Integer> stack = new Stack<Integer>();
    Stack<Integer> minStack = new Stack<Integer>();
    
    public void push(int x) {
        stack.push(x);
        if(minStack.empty())
            minStack.push(x);
        else
        {
            if(minStack.peek() >= x)
                minStack.push(x);
            
        }
    }

    public void pop() {
        
        if(!stack.empty() && !minStack.empty())
        {
            int x = stack.pop();
            if(x == minStack.peek())
                minStack.pop();
        }
    }

    public int top() {
        if(!stack.empty())
            return stack.peek();
        else
            return -1;
    }

    public int getMin() {
        if(!minStack.empty())
            return minStack.peek();
        else
            return -1;
    }
}
