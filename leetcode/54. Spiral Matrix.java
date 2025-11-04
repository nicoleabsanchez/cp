
class Solution {

    public List<Integer> spiralOrder(int[][] matrix) {
        int rowBegin = 0, columnBegin = 0;
        int rowEnd = matrix.length - 1, columnEnd = matrix[0].length - 1;
        List<Integer> ans = new ArrayList<>();

        while (rowBegin <= rowEnd && columnBegin <= columnEnd) {
            // ROW: LEFT -> RIGHT
            for (int j = columnBegin; j <= columnEnd; j++) {
                ans.add(matrix[rowBegin][j]);
            }
            rowBegin++;

            // COLUMN: UP -> DOWN
            for (int i = rowBegin; i <= rowEnd; i++) {
                ans.add(matrix[i][columnEnd]);
            }
            columnEnd--;

            // ROW: LEFT <- RIGHT
            if (rowBegin <= rowEnd) {
                for (int j = columnEnd; j >= columnBegin; j--) {
                    ans.add(matrix[rowEnd][j]);
                }
            }
            rowEnd--;

            //COLUMN: UP <- DOWN
            if (columnBegin <= columnEnd) {
                for (int i = rowEnd; i >= rowBegin; i--) {
                    ans.add(matrix[i][columnBegin]);
                }
            }
            columnBegin++;
        }

        return ans;
    }
}
