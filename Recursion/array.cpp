#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printArray(int arr[], int size, int index)
{
    if (index >= size)
    {
        return;
    }

    printArray(arr, size, index + 1);
    cout << arr[index] << endl;
}

// search in array
int searchIndex(int *arr, int size, int index, int target)
{
    if (index >= size)
        return -1;
    if (arr[index] == target)
    {
        return index;
    }

    searchIndex(arr, size, index + 1, target);
}

void printIndex(int *arr, int size, int index, int target)
{
    if (index >= size)
        return;
    if (arr[index] == target)
    {
        cout << index << endl;
    }
    printIndex(arr, size, index + 1, target);
}

void findMini(int arr[], int size, int index, int &mini)
{
    if (index >= size)
        return;
    // mini = min(mini,arr[index]);
    if (arr[index] < mini)
    {
        mini = arr[index];
    }
    findMini(arr, size, index + 1, mini);
}

void findEvenNO(int arr[], int size, int index, vector<int> &even)
{
    if (index >= size)
        return;
    if (arr[index] % 2 == 0)
    {
        even.push_back(arr[index]);
    }
    findEvenNO(arr, size, index + 1, even);
}

// double the array
void doubllesArray(int *arr, int size, int index, vector<int> &doubles)
{
    if (index >= size)
        return;
    arr[index] = arr[index] << 1;
    doubllesArray(arr, size, index + 1, doubles);
}
void printDigit(int nums, int reminder, vector<int> &ans)
{
    if (nums == 0)
        return;
    reminder = nums % 10;
    printDigit(nums / 10, reminder, ans);
        ans.push_back(reminder);

}
int main()
{
    int arr[8] = {10, 20, 10, 10, 50, 60};
    int size = 6;
    int index = 0;
    int target = 10;
    // int mini = arr[0];
    // if (searchIndex(arr, size, index, target))
    // {
    //     cout << "found" << endl;
    // }
    // else
    // {
    //     cout << "not found" << endl;
    // }
    // printArray(arr, size, index);
    //     findMini(arr, size, index, mini);
    // cout<<mini<<endl;
    // vector<int> even;
    // findEvenNO(arr, size, index, even);
    // for (int i = 0; i < even.size(); i++)
    // {
    //     cout<<even[i]<<endl;
    // }
    // vector<int> doubles;

    // doubllesArray(arr, size, index, doubles);
    // // for (int i = 0; i<size; i++)
    // // {
    // //     cout << arr[i] << endl;
    // // }
    // for (auto i : arr)
    // {
    //     cout << i << endl;
    // }

    // printIndex(arr, size, index, target);

    // print numsdidgits
    int nums = 4215;
    int remindex;
    vector<int> ans;
    printDigit(nums, remindex, ans);
    for (auto i : ans)
    {
        cout << i << endl;
    }
    return 0;
}