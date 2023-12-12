#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int matrix[2][3] = {{1, 2, 3}, {3, 2, 1}};
    int max = matrix[0][0];
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + matrix[i][j];
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max << endl;

    return 0;
}
