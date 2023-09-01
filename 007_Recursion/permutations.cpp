class Solution
{
private:
    void solve(vector<int> &nums, vector<vector<int>> &ans, int index)
    {
        // base case
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }

        // index remains same but all elements swap
        for (int j = index; j < nums.size(); j++)
        {
            // swap the index and i=0, i=1, i=2;
            swap(nums[index], nums[j]);
            // call recursive for next index
            solve(nums, ans, index + 1);
            // backtracking to its original form
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int index = 0;

        solve(nums, ans, index);

        return ans;
    }
};