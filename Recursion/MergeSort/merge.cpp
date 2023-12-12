// this is very important concept for interview and and
// your collage exam so must rember this algorithm

#include <iostream>
#include <vector>
using namespace std;
// for merging two sorted arrays;
void merge(int arr[], int start, int end)
{
    int mid = (start + end) / 2;

    int leftLen = mid - start + 1;
    int rightLen = end - mid;
    // create left and right arrays;
    int *left = new int[leftLen];
    int *right = new int[rightLen];
    // copy values from orignal arrays to left arrays;
    int k = start;
    for (int i = 0; i < leftLen; i++)
    {
        left[i] = arr[k];
        k++;
    }
    // copy values from orignal arrays to right arrays;
    k = mid + 1;
    for (int i = 0; i < rightLen; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // actual merge sort logic here
    // left arrays is already sorted
    // right arays is already sorted;
    int leftIndex = 0;
    int rightIndex = 0;
    // yahi pe galti karoge aur sab galti karte hai yahi pe;
    int mainIndex = start;
    while (leftIndex < leftLen && rightIndex < rightLen)
    {
        if (right[rightIndex] > left[leftIndex])
        {
            arr[mainIndex] = left[leftIndex];
            leftIndex++;
            mainIndex++;
        }
        else
        // (right[rightIndex] < left[leftIndex])
        {
            arr[mainIndex] = right[rightIndex];
            rightIndex++;
            mainIndex++;
        }
    }

    // two more case you have to handle
    // 1 ->left array exahust(kagatam) but right array me abhi bhi element bache hai
    while (leftIndex < leftLen)
    {

        arr[mainIndex] = left[leftIndex];
        leftIndex++;
        mainIndex++;
    }
    // 2->left array exahust(kagatam) but right array me abhi bhi element bache hai
    while (leftIndex < leftLen)
    {

        arr[mainIndex] = right[rightIndex];
        rightIndex++;
        mainIndex++;
    }
    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int start, int end)
{
    int mid = (start + end) / 2;

    // base case ;
    if (start > end)
    {
        return;
    }
    if (start == end)
    {
        return;
    }

    // recursive call for left;
    mergeSort(arr, start, mid);
    // recursive call for right;
    mergeSort(arr, mid + 1, end);
    // one more call for sorting;
    // meger two sorted arrays;I
    merge(arr, start, end);
}
int main()
{
    int arr[6] = {3, 1, 2, 9, 4, 6};
    int size = 6;
    int s = 0;
    int e = size - 1;
    mergeSort(arr, s, e);
    for (int i = 0; i < 6; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}