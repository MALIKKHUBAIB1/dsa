#include <iostream>
using namespace std;
int main()
{
    int arr[5][4] = {
        {1, 2, 3},
        {5, 8, 0},
        {7, 6, 7},
    };
    int rows = 3;
    int col = 3;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[j][i];
        }
        // cout << endl;
        cout << sum << endl;
    }

    return 0;
}