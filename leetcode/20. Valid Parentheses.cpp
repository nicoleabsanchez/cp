class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        unordered_map<char, char> hp = {{')', '('}, {']', '['}, {'}', '{'}};
        for (char c : s)
        {
            // if c is a closing parenthese
            if (hp.find(c) != hp.end())
            {
                if (!st.empty() && st.top() == hp[c])
                {
                    st.pop();
                }
                else
                    return false;
            }
            else
                st.push(c); // is an opening parenthese
        }

        return st.empty();
    }
};