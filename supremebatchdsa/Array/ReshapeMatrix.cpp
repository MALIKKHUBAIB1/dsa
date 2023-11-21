#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr{{1, 2}, {3, 4}};
    int row = arr.size();
    int col = arr[0].size();
    int r = 1;
    int c = 4;
    row = r;
    col = c;
    cout << row << "," << col << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}