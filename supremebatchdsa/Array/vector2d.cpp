#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> arr;
    vector<int> a{1, 2, 3};
    vector<int> b{4, 2, 3, 3, 4};
    vector<int> c{3, 6, 1};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    // cout << arr[0].size() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}