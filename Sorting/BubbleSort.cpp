#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // BUBBLE SORT ALGORITHM
    vector<int> arr = {10, 1, 7, 6, 14, 9};
    // r1 : 5;
    // r2: 4;
    // r3: 3
    // r4: 2
    // r5: 1
    // and n = 6;
    // n-round

    for (int round = 0; round < arr.size(); round++)
    {
        // bool swapped = false;
        // or
        int swapCount = 0;

        for (int j = 0; j < arr.size() - round; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swapped = true;

                swap(arr[j], arr[j + 1]);
                swapCount++;
            }
        }
        if (swapCount == 0) // matlab koi comparison nhi hua hai aur array pahle se he sorted hai
        {
            break;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}