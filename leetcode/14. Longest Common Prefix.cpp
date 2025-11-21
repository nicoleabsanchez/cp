class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int last = strs.size()-1;
        //let's try with the size of the last
        for (int i=0; i<strs[last].size();i++) {
            for (string s : strs) {
                if (i == s.size() || s[i] != strs[last][i]) return res;
            }
            res += strs[last][i];
        }

        return res;
    }
};