class Solution
{
public:
    string addBinary(string a, string b)
    {
        string ans = "";
        int carry = 0;
        int mx_size = max(a.size(), b.size());

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        for (int i = 0; i < mx_size; i++)
        {
            int digit_a = (i < a.size()) ? (a[i] - '0') : 0;
            int digit_b = (i < b.size()) ? (b[i] - '0') : 0;

            int total = digit_a + digit_b + carry;
            string chr = to_string(total % 2);
            ans = chr + ans;
            carry = total / 2;
        }

        if (carry == 1)
        {
            ans = "1" + ans;
        }

        return ans;
    }
};