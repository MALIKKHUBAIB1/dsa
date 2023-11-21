#include <iostream>
using namespace std;
// defing the function
bool findelKey(int arr[3][3], int rows, int col, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    // declaring an 2d array
    int arr[3][3] = {{5, 6, 8},
                     {7, 2, 4},
                     {1, 6, 9}};
    int rows = 3;
    int col = 3;
    // takin input by the user
    int key;
    cout << "enter the key you want to search" << endl;
    cin >> key;
    // storing the calling function into a bool type of varailbe
    bool result = findelKey(arr, rows, col, key);
    // printing true false
    if (result)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    ;
}