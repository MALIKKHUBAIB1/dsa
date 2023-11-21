#include <iostream>
#include <limits.h>
using namespace std;
void maxElement(int arr[], int min, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The min no of an element is:" << min << endl;
}
int main()
{
    // finding max element of an array
    int arr[] = {1, 3, 4, 6, 2, 5, 8, 9};
    int size = 8;
    // int max = -1;
    // also we can declre the  max elemet as given below
    int min = INT_MAX;
    // int min = 10;
    // cout << min;
    maxElement(arr, min, size);
    return 0;
}