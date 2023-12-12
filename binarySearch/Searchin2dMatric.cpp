#include <iostream>
#include <vector>
using namespace std;
bool findtarget(vector<vector<int>> matrix, int start, int end, int rowSize, int col, int target)
{
    int mid = (start + ((end - start) / 2));

    while (start <= end)
    {
        int rowIndex = mid / col;
        int colIndex = mid % col;
        if (matrix[rowIndex][colIndex] == target)
        {
            return true;
        }
        if (matrix[rowIndex][colIndex] > target)
        {
            end = mid - 1;
        }
        if (matrix[rowIndex][colIndex] < target)
        {
            start = mid + 1;
        }
        mid = (start + ((end - start) / 2));
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix{{1, 3, 5, 7},
                               {10, 11, 16, 20},
                               {23, 30, 34, 60}};
    int rowSize = matrix.size();
    cout << rowSize << endl;
    int col = matrix[0].size();
    cout << col << endl;

    int start = 0;
    int end = rowSize * col - 1;
    cout << end << endl;
    int target = 3;

    int ans = findtarget(matrix, start, end, rowSize, col, target);
    if (ans)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}