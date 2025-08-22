class Solution {
    public List<Integer> addToArrayForm(int[] num, int k) {
        List<Integer> ans = new ArrayList<>();

        int lastIndex = num.length -1;
        int carry = 0;

        while (lastIndex >= 0 || k > 0) {
            int sum = carry;
            
            if (lastIndex >= 0) {
                sum += num[lastIndex];
                lastIndex--;
            }
            if (k > 0) {
                sum += k % 10;
                k /= 10;
            }

            ans.add(sum % 10);
            carry = sum / 10;
        }

        if (carry > 0) {
            ans.add(carry);
        }

        Collections.reverse(ans);
        return ans;
    }
}