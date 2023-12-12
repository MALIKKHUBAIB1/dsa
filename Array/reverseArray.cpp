#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    // for (int i = size - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }

    // other way
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        // start = start + 1;
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}