class Solution
{
private:
    void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
    {
        // base case
        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }

        // get the first index value char ----> int conversion '2' -'0' = 2
        int num = digits[index] - '0';
        string arrEle = mapping[num]; // get the array element of index num

        //"abc" do this loop for each
        for (int i = 0; i < arrEle.length(); i++)
        {
            output.push_back(arrEle[i]);                    // index=0 ,initially "" --> push the a
            solve(digits, output, index + 1, ans, mapping); // index=1 , initial "a" --> goes for "ad"-->pops e-->goes for "ae"--->pops e--> goes for "af"-->pops f --> goes to a --> pops a--> ""
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;

        if (digits.length() == 0)
        {
            return ans;
        }

        string output = "";
        int index = 0;

        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(digits, output, index, ans, mapping);

        return ans;
    }
};