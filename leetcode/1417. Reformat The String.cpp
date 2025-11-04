class Solution
{
public:
    string reformat(string s)
    {
        string letters = "", numbers = "", res = "";

        for (char c : s)
        {
            if (48 <= int(c) && int(c) <= 57)
            {
                numbers += c;
            }
            else
            {
                letters += c;
            }
        }

        if (abs(int(letters.length()) - int(numbers.length())) > 1)
            return "";

        if (letters.length() > numbers.length())
        {
            for (int i = 0; i < (letters.length() + numbers.length()) / 2; i++)
            {
                res += letters[i];
                res += numbers[i];
            }
            res += letters[letters.length() - 1];
        }
        else if (letters.length() < numbers.length())
        {
            for (int i = 0; i < (letters.length() + numbers.length()) / 2; i++)
            {
                res += numbers[i];
                res += letters[i];
            }
            res += numbers[numbers.length() - 1];
        }
        else
        {
            for (int i = 0; i < (letters.length() + numbers.length()) / 2; i++)
            {
                res += numbers[i];
                res += letters[i];
            }
        }

        return res;
    }
};