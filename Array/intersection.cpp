#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int arr_sizea = 5;
    int brr[] = {3, 4, 5, 6};
    int arr_sizeb = 4;

    vector<int> ans;
    for (int i = 0; i < arr_sizea; i++)
    {
        for (int j = 0; j < arr_sizeb; j++)
        {

            if (arr[i] == brr[j])
            {
                ans.push_back(arr[i]);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}