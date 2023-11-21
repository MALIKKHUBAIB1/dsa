#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // vector<int> arr{2, 3, 4, 5, 6, 7, 8};

    // apply on vector
    // if (binary_search(arr.begin(), arr.end(), 4))
    // {
    //     cout << "found" << endl;
    // }
    // else
    // {
    //     cout << "not Found" << endl;
    // }

    // apply on array
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int size = 7;
    if (binary_search(arr, arr + size, 23))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}