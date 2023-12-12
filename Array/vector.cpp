#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declare dynamic arrays;
    vector<int> arr;
    // int ans = (sizeof(arr) / sizeof(int));

    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl;//

    // inserting
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    // printing
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    // popping
    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}