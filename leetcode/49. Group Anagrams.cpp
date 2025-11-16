class Solution
{
public:
    string getFrequencyString(string word)
    {
        vector<int> freq(26);

        for (char c : word)
        {
            freq[c - 'a']++;
        }

        string frequency_str;
        char c = 'a';
        for (int f : freq)
        {
            frequency_str += c;
            frequency_str += f;
            c++;
        }

        return frequency_str;
    }
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        if (strs.size() == 0)
            return {{""}};

        unordered_map<string, vector<string>> mp;

        for (string str : strs)
        {
            string freq_str = getFrequencyString(str);

            if (mp.contains(freq_str))
            {
                mp[freq_str].push_back(str);
            }
            else
            {
                vector<string> values;
                values.push_back(str);
                mp.insert({freq_str, values});
            }
        }

        vector<vector<string>> ans;
        for (auto i : mp)
        {
            ans.push_back(i.second);
        }

        return ans;
    }
};