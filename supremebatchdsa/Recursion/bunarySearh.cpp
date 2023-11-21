#include <iostream>
using namespace std;
int binarySearch(int arr[], int s, int end, int target)
{
    if (s > end)
    {
        return -1;
    }
    int mid = s + (end-s) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
     if (arr[mid] < target)
    {
        return binarySearch(arr, mid + 1, end, target);
    }  else
    {
        return binarySearch(arr, s, mid - 1, target);
    }
}
int main()
{
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int s = 0;
    int size = 8;
    int end = size - 1;
    int target = 60;
    int found = binarySearch(arr, s, end, target);
    if (found != -1)
    {
        cout << "found:"<<found << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}