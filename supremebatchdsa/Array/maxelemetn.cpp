#include <iostream>
#include <limits.h>
using namespace std;
int findMaxelemtn(int arr[3][3], int rows, int col, int max)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int arr[3][3] = {{5, 6, 9},
                     {7, 34, 9},
                     {4, 3, 12}};
    int rows = 3;
    int col = 3;
    int max = INT_MIN;

    cout << findMaxelemtn(arr, rows, col, max) << endl;
    ;
    return 0;
}