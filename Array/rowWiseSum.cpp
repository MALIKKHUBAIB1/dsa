#include <iostream>
using namespace std;
void rowWiseSum(int arr[3][3], int rowSize, int columnSize)
{

    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < columnSize; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
void colWiseSum(int arr[3][3], int rowSize, int columnSize)
{

    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < columnSize; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
}
void diognalSum(int arr[3][3], int rowSize, int columnSize)
{
    int sum = 0;
    for (int i = 0; i < rowSize; i++)
    {
        sum = sum + arr[i][i];
    }
    cout << sum << " ";
}

void transpose(int arr[3][3], int rowSize, int columnSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = i; j < columnSize; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void printTranspose(int arr[3][3], int rowSize, int columnSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {11, 8, 9}};
    int rowSize = 3;
    int columnSize = 3;
    // rowWiseSum(arr, rowSize, columnSize);
    // colWiseSum(arr, rowSize, columnSize);
    // diognalSum(arr, rowSize, columnSize);
    transpose(arr, rowSize, columnSize);
    printTranspose(arr, rowSize, columnSize);
    return 0;
}