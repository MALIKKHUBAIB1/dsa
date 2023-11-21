#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Selctio sort
int main()
{
    int arr[] = {5, 1, 3, 2, 6, 4};
    int n = 6;
    // outer loop mera round/itrator ko point karta hai
    for (int i = 0; i < n - 1; i++)
    {
        // inner loop mera minimum ko find karta hai and swap karta hai
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}