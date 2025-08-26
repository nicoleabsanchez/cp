#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
    {
        vector<bool> ans(4, true);
        int n = mat.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int aux = mat[i][j];
                if (aux != target[i][j])
                    ans[0] = false;
                if (aux != target[j][n - i - 1])
                    ans[1] = false;
                if (aux != target[n - i - 1][n - j - 1])
                    ans[2] = false;
                if (aux != target[n - j - 1][i])
                    ans[3] = false;
            }
        }
        return ans[0] || ans[1] || ans[2] || ans[3];
    }
};