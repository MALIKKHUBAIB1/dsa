#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{23, -7, 12, -10, -11, 40, 60};

    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        if (arr[s] < 0)
        {
            s++;
        }
        if (arr[e] > 0)
        {
            e--;
        }
        else
        {
            swap(arr[e], arr[s]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}