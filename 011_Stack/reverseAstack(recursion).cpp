void inserAtBottom(stack<int> &stack, int x)
{
    // base case
    if (stack.empty())
    {
        stack.push(x);
        return;
    }

    int num = stack.top();
    stack.pop();

    inserAtBottom(stack, x);

    stack.push(num);
}

void reverseStack(stack<int> &stack)
{
    // Write your code here
    // base case if stack empty return if not
    if (stack.empty())
    {
        return;
    }
    int ans = stack.top(); // takes ans stores
    stack.pop();           // pops the ans

    reverseStack(stack); // calls the above for all the ele until its empty

    inserAtBottom(stack, ans);
    // when the above returns it calls this function and pass ans that has to be insertted at bottom
}
