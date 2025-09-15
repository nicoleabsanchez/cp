#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int rows, columns;
        cin >> rows >> columns;
        int big_squares = (rows / 2) * (columns / 2);
        int area_occupied = big_squares * 4;
        int space_left = (rows * columns) - area_occupied;
        cout << space_left << endl;
    }
}
