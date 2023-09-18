#include <bits/stdc++.h>
void sortStackInsert(stack<int> &s, int ans)
{
    // base case to check if its empty insert ans , or if its less than top insert
    if (s.empty() || (s.top() < ans))
    {
        s.push(ans);
        return;
    }

    int num = s.top();
    s.pop();

    sortStackInsert(s, ans);

    s.push(num);
}

stack<int> sortStack(stack<int> &s)
{
    // Write code here.
    // base case
    if (s.empty())
    {
        return s; // return ; if return type is void
    }

    int ans = s.top();
    s.pop();

    sortStack(s);

    sortStackInsert(s, ans);

    return s; // remove this line if return type is void
}