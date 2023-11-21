#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    int arr[4][4] = {{0, 0, 1}, {0, 1, 1}, {0, 1, 1, 1}, {1, 1, 1, 1}};
    int max = INT_MIN;
    int row = -1;
    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        // cout << std::max(count, i) << endl;
        if (max < count)
        {
            max = count;
            row = i;
        }
        // cout << i << " ," << count << endl;
    }
    cout << max << "," << row << endl;
    return 0;
}