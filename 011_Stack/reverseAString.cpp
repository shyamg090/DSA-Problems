#include <stack>
string reverseString(string &str)
{
    // Write your code here.
    stack<char> ans;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        ans.push(ch);
    }
    str = "";
    while ( !ans.empty() )
    {
        char ch = ans.top();
        str += ch;
        ans.pop();
    }

    return str;
}
