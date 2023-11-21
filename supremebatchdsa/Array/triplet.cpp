#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // declaring an array
    vector<int> arr{10, 20, 30, 40};
    int sum = 80;
    // outer Loop for x cordinate
    for (int i = 0; i < arr.size(); i++)
    {
        // inner  loop for y cordinate
        int element1 = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            // inner loop for z cordinate
            int element2 = arr[j];
            for (int ans = j + 1; ans < arr.size(); ans++)
            {
                // compraing the tripple to the sum
                int element3 = arr[ans];
                if (element1 + element2 + element3 == sum)
                {
                    // printing the triplate
                    cout << element1 << "," << element2 << "," << element3 << " Sum is equal to : " << sum << endl;
                }
            }
        }
    }
    return 0;
}