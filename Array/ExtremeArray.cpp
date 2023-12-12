#include <iostream>
using namespace std;
void ExtremeElement(int arr[], int size, int start, int end)
{
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
        cout << arr[start] << " ";
        cout << arr[end] << " ";
        start++;
        end--;
        if (start > end)
        {
            // cout << arr[start];
            break;
        }

        // if (start > end)
        // {
        //     break;
        // }
    }
    // cout << "The min no of an element is:" << start << endl;
}
int main()
{
    // finding max element of an array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int start = 0;
    int end = size - 1;
    ExtremeElement(arr, size, start, end);
    return 0;
}