#include <bits/stdc++.h>

void solve(stack<int> &myStack, int x)
{

    // base case if count == size then push the x into stack
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    solve(myStack, x);

    myStack.push(num);
}

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    // Write your code here.
    solve(myStack, x);

    return myStack;
}

/* My Approach

#include <bits/stdc++.h>

void solve(stack<int>& myStack,int count, int size , int x){

    //base case if count == size then push the x into stack
    if(count == size+1 ){
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    solve(myStack , count+1 , size , x);

    myStack.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x)
{
    // Write your code here.
    int count = 1;
    int size = myStack.size();
    // cout<<"size : "<<size<<endl;

   solve(myStack , count, size , x);

   return myStack;
}

*/
