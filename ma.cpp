// File: path_matrix.cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> adj(n, vector<int>(n));
    vector<vector<int>> path(n, vector<int>(n));

    // Read adjacency matrix
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> adj[i][j];

    // Initialize path matrix with adjacency
    path = adj;

    // Warshall's algorithm
    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (path[i][k] && path[k][j])
                    path[i][j] = 1;

    // Output path matrix
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << path[i][j] << " ";
        cout << endl;
    }

    return 0;
}
