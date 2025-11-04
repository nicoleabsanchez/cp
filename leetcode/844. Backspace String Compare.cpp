class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        string rs = "";
        string rt = "";

        for (char c : s)
        {
            if (!rs.empty() && c == '#')
            {
                rs.pop_back();
            }
            else if (c != '#')
            { // This also handles if we start with #
                rs.push_back(c);
            }
        }

        for (char c : t)
        {
            if (!rt.empty() && c == '#')
            {
                rt.pop_back();
            }
            else if (c != '#')
            {
                rt.push_back(c);
            }
        }

        return rs == rt;
    }
};