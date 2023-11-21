// very very important question prospective to interview

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4], int row, int col, vector<vector<bool>> &visited)
{
    if ((newx >= 0 && newx < row) &&
        (newy >= 0 && newy < row) &&
        (maze[newx][newy] == 1 && visited[newx][newy] == false))
    {
        return true;
    }

    return false;
}

void printAllPossibleWay(int maze[][4], int row, int col, int srcx, int srcy, string &output, vector<vector<bool>> &visited)
{
    // base case
    // destion condition (row-1 ans col-1);

    if (srcx == row - 1 && srcy == col - 1)
    {
        cout << output << endl;
        return;
    }

    // ek case solve kar do baki recursion sambhal lega;
    // for  UP case
    int newx = srcx - 1;
    int newy = srcy;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited))
    {
        // mark visited
        visited[newx][newy] = true;
        // call recursion
        output.push_back('U');
        printAllPossibleWay(maze, row, col, newx, newy, output, visited);
        // backtracking
        output.pop_back();
        visited[newx][newy] = false;
    }
    // for RIGHT Case
    newx = srcx;
    newy = srcy + 1;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited))
    {
        // mark visited
        visited[newx][newy] = true;
        // call recursion
        output.push_back('R');
        printAllPossibleWay(maze, row, col, newx, newy, output, visited);
        // backtracking
        output.pop_back();
        visited[newx][newy] = false;
    }
    // DOWN case
    newx = srcx + 1;
    newy = srcy;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited))
    {
        // mark visited
        visited[newx][newy] = true;
        // call recursion
        output.push_back('D');
        printAllPossibleWay(maze, row, col, newx, newy, output, visited);
        // backtracking
        output.pop_back();
        visited[newx][newy] = false;
    }
    // LEFT case
    newx = srcx;
    newy = srcy - 1;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited))
    {
        // mark visited
        visited[newx][newy] = true;
        // call recursion
        output.push_back('L');
        printAllPossibleWay(maze, row, col, newx, newy, output, visited);
        // backtracking
        output.pop_back();
        visited[newx][newy] = false;
    }
}
int main()
{
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 1, 0},
        {1, 1, 1, 1},
    };

    int row = 4;
    int col = 4;
    int srcx = 0;
    int srcy = 0;
    string output = "";
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    if (maze[0][0] == 0)
    {
        cout << "no Path exist" << endl;
    }
    else
    {
        visited[srcx][srcy] = true;
        printAllPossibleWay(maze, row, col, srcx, srcy, output, visited);
    }
    return 0;
}