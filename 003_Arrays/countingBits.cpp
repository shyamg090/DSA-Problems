class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> ans;

        for (int i = 0; i <= n; i++)
        {
            int count = 0;
            int num = i;
            while (num != 0)
            {
                // we have to count 1's in binary representation of i, therefore % 2
                count += num % 2;
                num = num / 2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};