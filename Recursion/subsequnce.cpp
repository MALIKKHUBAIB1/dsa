#include <iostream>
#include <vector>
using namespace std;
void sebsequnce(int i, vector<int> &arr, vector<int> arr2)
{
    if (i == arr.size())
    {
        for (auto i : arr2)
        {
            cout << i << "";
        }
        if (arr2.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    arr2.push_back(arr[i]);
    sebsequnce(i + 1, arr, arr2);
    arr2.pop_back();

    sebsequnce(i + 1, arr, arr2);
}
int main()
{
    int index = 0;
    vector<int> arr = {1, 2, 3};
    vector<int> arr2;
    sebsequnce(index, arr, arr2);
    return 0;
}