#include <iostream>
#include <vector>
using namespace std;
int repetingElement(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        bool istrue = false;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                // istrue = true;
                return i + 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 5, 3, 4, 3, 5, 6};
    int ans = repetingElement(arr);
    cout << ans << endl;
    return 0;
}