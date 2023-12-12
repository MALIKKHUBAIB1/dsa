#include <iostream>
using namespace std;
int binarySearch(int arr[], int target, int start, int end, int size)
{
    int mid = ((start + end) / 2);

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            // search in left
            end = mid - 1;
        }
        // search in right
        else
        {
            start = mid + 1;
        }
        mid = ((start + end) / 2);
    }

    return -1;
}
int main()
{
    int arr[] = {2, 3, 5, 6, 8, 9, 12, 14};
    int target = 14;
    int start = 0;
    int size = 8;
    // int end = (sizeof(arr) / sizeof(int)) - 1;
    int end = size - 1;
    int indexof = binarySearch(arr, target, start, end, size);
    if (indexof == -1)
    {
        cout << "not found" << indexof << endl;
    }
    else
    {
        cout << "found at "
             << ": " << indexof << "postion" << endl;
    }
    return 0;
}