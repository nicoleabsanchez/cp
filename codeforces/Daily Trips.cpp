#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, H, W;
    cin >> n >> H >> W;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            char flag;
            cin >> flag;
            bool is_raining = (flag == 'Y');

            if (j == 0)
            {
                if (is_raining || W == 0)
                {
                    H--;
                    W++;
                    cout << "Y ";
                }
                else
                    cout << "N ";
            }
            else
            {
                if (is_raining || H == 0)
                {
                    W--;
                    H++;
                    cout << "Y ";
                }

                else
                    cout << "N ";
            }
        }
        cout << endl;
    }
}
