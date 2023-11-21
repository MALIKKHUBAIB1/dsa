#include <iostream>
using namespace std;
void transPose(int arr[3][3], int rows, int col)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
int main()

{
    int arr[3][3] = {{5, 6, 9},
                     {7, 3, 9},
                     {4, 3, 2}};
    int rows = 3;
    int col = 3;
    transPose(arr, rows, col);
    return 0;
}