class Solution {
    public List<Integer> luckyNumbers(int[][] matrix) {
        int n = matrix.length, m = matrix[0].length;

        List<Integer> row_min = new ArrayList<>();
        for (int i=0; i<n; i++){
            int mini = Integer.MAX_VALUE;

            for(int j=0; j<m; j++) {
                mini = Math.min(mini, matrix[i][j]);
            }

            row_min.add(mini);
        }


        List<Integer> column_max = new ArrayList<>();
        for(int j=0; j<m; j++){
            int maxi = Integer.MIN_VALUE;

            for(int i=0; i<n; i++){
                maxi = Math.max(maxi, matrix[i][j]);
            }

            column_max.add(maxi);
        }

        List<Integer> ans = new ArrayList <>();
        for(int i=0; i<n; i++){
            for (int j=0; j<m; j++) {
                if (matrix[i][j] == row_min.get(i) && matrix[i][j] == column_max.get(j)){
                    ans.add(matrix[i][j]);
                }
            }
        }

        return ans;
    }
}