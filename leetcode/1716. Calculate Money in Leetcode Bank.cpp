class Solution
{
public:
    int totalMoney(int n)
    {
        int monday = 1;
        int day = 1;
        int count = 1;

        for (int i = 2; i <= n; i++)
        {
            if (i % 7 == 1)
            {
                monday++;
                count += monday;
                day = monday;
                continue;
            }

            day++;
            count += day;
        }

        return count;
    }
};