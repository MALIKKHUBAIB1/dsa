#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int findMaxElement(int arr[3][4], int rowSize, int columnSize)
{
    int max = INT_MIN;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int arr[3][4] = {
        {23, 2, 3, 4},
        {4, 5, 6, 7},
        {11, 8, 9, 10}};
    int rowSize = 3;
    int columnSize = 4;
    int ans = findMaxElement(arr, rowSize, columnSize);
    cout << ans << endl;
    return 0;
}