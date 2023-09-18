#include <bits/stdc++.h>

void solve(stack<int> &inputStack, int count, int size)
{
    // to vizualize this consider 3 ele stack-->call recursice call for more ele
    // base case
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }

    // store thr num and pop the num
    int num = inputStack.top();
    inputStack.pop(); // it pops the top as num is representing the top

    solve(inputStack, count + 1, size); // recuresice call for next count/next top ele

    // when the above executes ans comes back..
    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N)
{

    // Write your code here

    int count = 0;

    solve(inputStack, count, N);
}