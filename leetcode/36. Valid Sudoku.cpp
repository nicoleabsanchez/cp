class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_map<int, set<char>> rows;
        unordered_map<int, set<char>> cols;
        map<pair<int, int>, set<char>> sqrs;

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;

                if (rows[i].find(board[i][j]) != rows[i].end() ||
                    cols[j].find(board[i][j]) != cols[j].end() ||
                    sqrs[{i / 3, j / 3}].find(board[i][j]) != sqrs[{i / 3, j / 3}].end())
                {
                    return false;
                }

                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                sqrs[{i / 3, j / 3}].insert(board[i][j]);
            }
        }

        return true;
    }
};