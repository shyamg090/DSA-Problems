class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string ans = "";
        int count = 0;

        for (char val : s)
        {
            if (val == '(' && count == 0)
            {
                count++;
            }
            else if (val == '(' && count >= 1)
            {
                ans += val;
                count++;
            }
            else if (val == ')' && count > 1)
            {
                ans += val;
                count--;
            }
            else if (val == ')' && count == 1)
            {
                count--;
            }
        }

        return ans;
    }
};