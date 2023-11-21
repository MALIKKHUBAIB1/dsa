#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
    int start = 0;
    int end = arr.size() - 1;
    // for (int i = 0; i < arr.size(); i++)
    // {

    //     if (arr[i] == 0)
    //     {
    //         swap(arr[start], arr[i]);
    //         start++;
    //     }
    //     else
    //     // if (arr[i] == 1)
    //     {
    //         swap(arr[end], arr[i]);
    //         end--;
    //     }
    // }
    int i = 0;
    while (start <= end)
    {
        if (arr[i] == 0)
        {
            swap(arr[start], arr[i]);
              i++;
            start++;
        }
        else
        // if (arr[i] == 1)
        {
            swap(arr[end], arr[i]);
            end--;
        }
    }

    for (int p = 0; p < arr.size(); p++)
    {
        cout << arr[p] << " ";
    }
}