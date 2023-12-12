#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // cout << a << endl;
    // int *ptr = &a;
    // cout << "Address of a: " << &a << endl;
    // cout << ptr << endl;                               // it is storing the address of a
    // cout << "Accessing ptr value  : " << *ptr << endl; // the value of a beacuse *ptr is storing the value of a;
    // cout << ptr << endl;                               // iska matlab ptr wale dabbe ka address kya hai
    // int a = 5;
    // // cout << *a << endl;
    // int *ptr = &a;
    // cout << "address" << ptr << endl;

    // cout << sizeof(ptr) << endl;
    // char ch = 'a';
    // char *ptr2 = &ch;
    // cout << sizeof(ptr2) << endl;
    // long lcahi = 12;
    // long *ptr3 = &lcahi;
    // cout << sizeof(ptr3) << endl;
    int arr[5] = {10, 20, 30, 40, 50};
    cout << *arr + 1 << endl;
    cout << *arr + 1 << endl;
    cout << *arr + 3 << endl;

    return 0;
}