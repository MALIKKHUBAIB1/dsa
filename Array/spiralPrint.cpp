#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (row == 0)
            {
                if (col == 3)
                {
                    cout << matrix[row][col] << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}