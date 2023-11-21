#include <iostream>
using namespace std;
// void passByRefrence(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] + 10 << endl;
//     }
// }

// void liearSearch(int arr[], int size, int key, bool flag)
// {
//     for (int i = 0; i < size; i++)
//     {

//         if (arr[i] == key)
//         {
//             flag = 1;
//         }
//     }
//     if (flag)
//     {
//         cout << "Found" << endl;
//     }
//     else
//     {
//         cout << "Not Found" << endl;
//     }
// }

// Count Zeros
void countZeros(int arr[], int countZero, int size, int countOne)
{
    for (int i = 0; i < size; i++)
    {

        // Counting Zeros
        if (arr[i] == 0)
        {
            countZero = countZero + 1;
        }
        // Counting ones
        if (arr[i] == 1)
        {
            countOne++;
        }
    }
    // Printing zeros
    cout << "no of Zeros is :" << countZero << endl;
    // Printing ones
    cout << "no of One is :" << countOne << endl;
}
int main()
{
    // int n;
    // cin >> n;
    // int arr[10];
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cin >> arr[i];
    //     // cout << arr[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout << arr[i] * 2 << endl;
    // }

    // int arr[5] = {1, 3, 5, 7, 8};
    // for (int i = 0; i < 5; i++)
    // {
    //     int ans = arr[i] = 1;
    //     cout << ans << endl;
    // }

    // int arr[10] = {1, 2, 3, 4, 5, 6};
    // cout << arr[7] << endl;

    /// pass by refrence
    // int arr[10] = {2, 3, 3, 4};
    // cout << sizeof(arr) << endl;
    // int size = 2;
    // passByRefrence(arr, size);

    // Liner Search in array
    // int arr[7] = {2, 9, 4, 6, 7, 8, 9};
    // int size = 7;
    // int key;
    // cout << "Enter the key" << endl;
    // cin >> key;
    // bool flag = 0;
    // liearSearch(arr, size, key, flag);


    // count Zeros and one in an array;
    int arr[] = {0, 0, 1, 0, 1, 0, 1, 1, 0, 0};
    int size = 10;
    int countZero = 0;
    int countOne = 0;
    countZeros(arr, countZero, size, countOne);

    return 0;
}