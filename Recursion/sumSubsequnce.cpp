#include <iostream>
using namespace std;
#include <vector>
void printSum(int i, vector<int> &arr, int &sum, vector<int> arr2, int sumx)
{

    if (i == arr.size())
    {

        if (sumx == sum)
        {
            for (auto i : arr2)
            {
                cout << i << "";
            }
            cout << endl;
            return;
        }
        return;
    }
    arr2.push_back(arr[i]);
    sumx += arr[i];
    printSum(i + 1, arr, sum, arr2, sumx);
    sumx -= arr[i];

    arr2.pop_back();
    printSum(i + 1, arr, sum, arr2, sumx);
}
int main()
{
    int index = 0;
    vector<int> arr = {1, 2, 1};
    vector<int> arr2;
    int sum = 2;
    int sumx = 0;
    printSum(index, arr, sum, arr2, sumx);
    return 0;
}