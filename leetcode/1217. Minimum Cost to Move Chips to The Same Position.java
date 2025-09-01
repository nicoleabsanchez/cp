class Solution {
    public int minCostToMoveChips(int[] position) {
        int even = 0, odd = 0;

        for(int i=0; i<position.length; i++){
            if (position[i] % 2 == 0) even++;
            else odd++;
        }

        if (even == position.length || odd == position.length) return 0;

        return Math.min(odd, even);
    }
}