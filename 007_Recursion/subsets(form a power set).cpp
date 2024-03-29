class Solution
{
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
    {
        if (index >= nums.size())
        {
            ans.push_back(output);
            return;
        }

        // exclude
        solve(nums, output, index + 1, ans);

        // include
        int ele = nums[index];
        output.push_back(ele);
        solve(nums, output, index + 1, ans);
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> output;
        vector<vector<int>> ans;

        int index = 0;

        solve(nums, output, index, ans);

        return ans;
    }
};