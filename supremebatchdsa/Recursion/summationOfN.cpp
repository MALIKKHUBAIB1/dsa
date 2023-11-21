#include <iostream>
#include<vector>
using namespace std;
void summation(int index,vector<int>arr, int size, int sum)
{
    if (index > size)
    {
        cout << sum << endl;
        return;
    }
    // cout<<index<<endl;
    sum = sum + arr[index];
    summation(index + 1, arr, size, sum);
}

int main()
{
    vector<int>arr = {1, 2, 3, 4, 5, 6};
    int index = 0;
    int sum = 0;
    int size = arr.size()-1;
    summation(index, arr, size, sum);
    return 0;
}