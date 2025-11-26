class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> hm; // id, vector of anagrams

        for (string str : strs)
        {
            vector<int> alph(26, 0);

            for (char c : str)
            {
                alph[c - 'a']++;
            }

            string key = "";
            for (int freq : alph)
            {
                key += to_string(freq) + '.';
            }

            hm[key].push_back(str);
        }

        vector<vector<string>> ans;
        for (auto pair : hm)
        {
            ans.push_back(pair.second);
        }

        return ans;
    }
};