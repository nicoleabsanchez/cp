class Solution
{
public:
    int minCost(string colors, vector<int> &neededTime)
    {
        // I'll be using the two pointer technique
        int time = 0; // I'll initilize the answer as 0
        int l = 0;    // This is my left pointer

        // I'll track my right pointer using a for loop
        for (int r = 1; r < colors.length(); r++)
        {
            if (colors[l] == colors[r])
            {
                if (neededTime[l] < neededTime[r])
                {
                    time += neededTime[l];
                    // As I'll eliminate the left baloon, now I need to place my left pointer where my right pointer was, and increment by one my right pointer (the for-loop will do this)
                    l = r;
                }
                else
                {
                    time += neededTime[r];
                    // As I'll eliminate the right ballon, my left pointer will stay in the same place and I nedd to increment by one my right pointer (my for-loop will be in charge of this)
                    // So we do nothing
                }
            }
            // If the colors are not the same
            // I place my left pointer to where my right pointer was and increment my right pointer by one
            else
            {
                l = r;
            }
        }

        return time; // We'll be returning answer, obviously
    }
};