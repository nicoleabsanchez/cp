class Solution {
    public int[] sumZero(int n) {
        int[] a = new int[n];
        if (n == 1) {
            a[0] = 0;
            return a;
        }

        for (int i=0; i<n/2; i++) {
            a[2*i] = (i + 1);
            a[2*i+1] = (i+1) * -1;
        }

        if (n % 2 != 0) a[n-1] = 0;

        return a;
    }
}