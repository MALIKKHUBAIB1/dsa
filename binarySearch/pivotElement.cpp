#include <iostream>
#include <vector>
using namespace std;
int pivotElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + ((end - start) / 2));
    while (start <= end)
    {
        // if (arr[mid] < arr[mid - 1])
        // {
        //     return mid - 1;
        // }
        // else if (arr[mid] > arr[mid + 1])
        // {
        //     return mid;
        // }
        // else if (arr[start] >= arr[mid])
        // {
        //     end = mid - 1;
        // }
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
            start = mid + 1;
        }
        else if (arr[start] >= arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = start + 1;
        }
        mid = (start + ((end - start) / 2));
    }
    return -1;
}
int main()
{
    vector<int> arr{3, 4, 5, 6, 7, 8, 0, 1, 2};
    int ans = pivotElement(arr);
    cout << arr[ans] << endl;
    return 0;
}