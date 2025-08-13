class Solution
{
    int dr[4] = { -1, 1, 0, 0 };
    int dc[4] = { 0, 0, -1, 1 };
    bool visited[100][100];

public:
    bool dfs(vector<string>& board, const string& word, int pos, int i, int j)
    {
        if (pos == word.size() - 1) return true;

        visited[i][j] = true;
        for (int k = 0; k < 4; ++k)
        {
            int row = i + dr[k], col = j + dc[k];
            if (row >= 0 && row <= board.size() - 1 && col >= 0 && col <= board[0].size() - 1 && !visited[row][col] && board[row][col] == word[pos + 1])
                if (dfs(board, word, pos + 1, row, col)) return true;
        }
        visited[i][j] = false;

        return false;
    }

    bool exist(vector<string>& board, string word)
    {
        for (int i = 0; i < board.size(); ++i)
            for (int j = 0; j < board[0].size(); ++j)
                if (board[i][j] == word[0])
                    if (dfs(board, word, 0, i, j)) return true;
        return false;
    }
};