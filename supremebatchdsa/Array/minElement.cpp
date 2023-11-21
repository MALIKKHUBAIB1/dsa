#include <iostream>
#include <limits.h>
using namespace std;
int findMaxelemtn(int arr[3][3], int rows, int col, int min)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main()
{
    int arr[3][3] = {{5, 6, 9},
                     {7, 34, 9},
                     {4, 3, 12}};
    int rows = 3;
    int col = 3;
    int min = INT_MAX;

    cout << findMaxelemtn(arr, rows, col, min) << endl;
    ;
    return 0;
}