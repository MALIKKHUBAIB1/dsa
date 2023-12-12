#include <iostream>
using namespace std;
bool isArraysorted(int arr[], int index, int size)
{
    if (index >= size)
        return true;
    if (arr[index] > arr[index - 1])
    {
        bool nextAns = isArraysorted(arr, index + 1, size);
        return nextAns;
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[6] = {10, 20, 30, 40, 90, 60};
    int index = 1;
    int size = 6;
    if (isArraysorted(arr, index, size))
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}