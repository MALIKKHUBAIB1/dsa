#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
void sqaure(int *p)
{
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
    cout << a << endl;
}
void printArray(int arr[], int n)
{
    if (n == 0)
        return;
    cout << *arr << endl;
    printArray(arr + 1, n - 1);
}
int main()
{
    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // int arr[5];
    // int *d;
    // cout << sizeof(arr) << "  " << sizeof(d) << endl;
    // char arr[20];
    // int i;
    // for ( i = 0; i < 10; i++)
    // {
    //     *(arr + i) = 65 + i;
    // }
    // *(arr + i) = '\0';
    // cout << arr<<endl;
    // char *ptr;
    // char Str[] = "abcdefg";
    // ptr = Str;
    // ptr = ptr + 5;
    // cout << ptr << endl;

    // int a = 10;
    // sqaure(&a);
    // cout << a << endl;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    printArray(arr, n);
    return 0;
}