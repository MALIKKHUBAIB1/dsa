// Quick Sort Algorithm

#include <iostream>
using namespace std;
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int i = start - 1;
    int j = start;
    int pivot = end;
    while (j < pivot)
    {
        if (arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);
    quickSort(arr, start, i - 1);
    quickSort(arr, i + 1, end);
}
int main()
{
    int arr[8] = {7, 2, 1, 8, 6, 3, 5, 4};
    int start = 0;
    int size = 8;

    int end = size - 1;
    quickSort(arr, start, end);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}