class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int n = mat.length, m = mat[0].length;
        if (n * m != r * c)
            return mat;

        int[][] newm = new int[r][c];
        int idx = 0;
        // Iterate trough the oringinal matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                newm[idx / c][idx % c] = mat[i][j];
                idx++;
            }
        }

        return newm;
    }
}