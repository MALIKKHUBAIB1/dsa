#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{5, 7, 3, 2};
    int start = 0;
    int end = arr.size() - 1;

    swap(arr[start], arr[end]);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}