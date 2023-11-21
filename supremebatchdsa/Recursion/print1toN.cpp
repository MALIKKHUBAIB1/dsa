#include <iostream>
using namespace std;
void printOneToN(int index, int times)
{
    if (index > times)
        return;
    // print 1 to N;
    // cout << index << endl;

    printOneToN(index + 1, times);
    // print N to 1;
    cout << index << endl;
}
void oppositePrint(int times)
{
    if (times < 1)
    {
        return;
    }
    // print 1 to N;
    // cout << index << endl;
    cout << times << endl;
    oppositePrint(times - 1);
    // print N to 1;
}
int main()
{
    // print 1 to N
    int index = 1;
    int times = 10;
    oppositePrint(times);
    // printOneToN(index, times);
    return 0;
}