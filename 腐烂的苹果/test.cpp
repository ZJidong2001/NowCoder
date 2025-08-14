class Solution
{
    int dr[4] = { -1, 1, 0, 0 };
    int dc[4] = { 0, 0, -1, 1 };
    typedef pair<int, int> PII;
public:
    int rotApple(vector<vector<int>>& grid)
    {
        queue<PII> q;
        for (int i = 0; i < grid.size(); ++i)
            for (int j = 0; j < grid[0].size(); ++j)
                if (grid[i][j] == 2) q.push({ i, j });

        int ret = -1;
        while (!q.empty())
        {
            ++ret;
            int cnt = q.size();
            while (cnt--)
            {
                auto [row, col] = q.front();
                q.pop();
                for (int k = 0; k < 4; ++k)
                {
                    int x = row + dr[k], y = col + dc[k];
                    if (x >= 0 && x <= grid.size() - 1 && y >= 0 && y <= grid[0].size() - 1 && grid[x][y] == 1)
                    {
                        grid[x][y] = 2;
                        q.push({ x, y });
                    }
                }
            }
        }

        for (int i = 0; i < grid.size(); ++i)
            for (int j = 0; j < grid[0].size(); ++j)
                if (grid[i][j] == 1) return -1;

        return ret;
    }
};