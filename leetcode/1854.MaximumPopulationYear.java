class Solution {
    public int maximumPopulation(int[][] logs) {
        int year = Integer.MAX_VALUE;
        int countOf = 0;
        for (int i=0; i<logs.length; i++){
            for(int j=0; j<2; j++){
                int y = logs[i][j];
                int count = 0;

                for (int a=0; a<logs.length; a++) {
                    int ini = logs[a][0];
                    int fin = logs[a][1];

                    if (y >= ini && y < fin) {
                        count++;
                    }
                }

                if (count > countOf) {
                    countOf = count;
                    year = y;
                }

                else if (count == countOf) {
                    year = Math.min(year, y);
                }
            }
        }

        return year;
    }
}