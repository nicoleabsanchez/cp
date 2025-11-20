class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> hp;
        hp.insert({'I', 1});
        hp.insert({'V', 5});
        hp.insert({'X', 10});
        hp.insert({'L', 50});
        hp.insert({'C', 100});
        hp.insert({'D', 500});
        hp.insert({'M', 1000});

        int sum = hp[s[s.size() - 1]];

        for (int i = s.size() - 2; i >= 0; i--)
        {
            if (hp[s[i]] < hp[s[i + 1]])
                sum -= hp[s[i]];
            else
                sum += hp[s[i]];
        }

        return sum;
    }
};