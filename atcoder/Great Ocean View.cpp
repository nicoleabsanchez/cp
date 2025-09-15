#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int top, count = 1;
    cin >> top;

    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        cin >> temp;
        if (temp >= top)
        {
            count++;
            top = temp;
        }
    }

    cout << count << endl;
}
