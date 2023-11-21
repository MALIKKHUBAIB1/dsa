#include <iostream>
#include <limits.h>
using namespace std;
void maxElement(int arr[], int max, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The max no of an element is:" << max << endl;
}
int main()
{
    // finding max element of an array
    int arr[] = {1, 3, 4, 6, 2, 5, 8, 9};
    int size = 8;
    // int max = -1;
    // also we can declre the  max elemet as given below
    int max = INT_MIN;
    maxElement(arr, max, size);
    return 0;
}