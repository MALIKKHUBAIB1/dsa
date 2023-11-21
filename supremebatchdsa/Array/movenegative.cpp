#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, -3, 4, -5, 6};
    vector<int> result;
    int start = 0;
    int end = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[start] < 0)
        {
            start++;
        }
        else if (arr[end] > 0)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}