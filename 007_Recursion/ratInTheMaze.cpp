class Solution
{

private:
    bool issafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
    {

        if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void solve(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> visited, string path, vector<string> &ans)
    {
        // base case i.e if it reached the end push_back path to ans
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // down
        int mx = x + 1;
        int my = y;
        if (issafe(mx, my, n, visited, m))
        {
            path.push_back('D'); // push
            solve(m, n, mx, my, visited, path, ans);
            path.pop_back(); // backtrack make it pop
        }

        // right
        mx = x;
        my = y + 1;
        if (issafe(mx, my, n, visited, m))
        {
            path.push_back('R'); // push
            solve(m, n, mx, my, visited, path, ans);
            path.pop_back(); // backtrack make it pop
        }

        // left
        mx = x;
        my = y - 1;
        if (issafe(mx, my, n, visited, m))
        {
            path.push_back('L');
            solve(m, n, mx, my, visited, path, ans);
            path.pop_back();
        }

        // up
        mx = x - 1;
        my = y;
        if (issafe(mx, my, n, visited, m))
        {
            path.push_back('U');
            solve(m, n, mx, my, visited, path, ans);
            path.pop_back();
        }

        visited[x][y] = 0; // backtracking make visited 0
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {

        vector<string> ans;

        if (m[0][0] == 0 || m[n - 1][n - 1] == 0)
        {
            return ans;
        }

        int x = 0;
        int y = 0;

        vector<vector<int>> visited = m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] == 0;
            }
        }

        string path = "";

        solve(m, n, x, y, visited, path, ans);

        sort(ans.begin(), ans.end());

        return ans;
    }
};
