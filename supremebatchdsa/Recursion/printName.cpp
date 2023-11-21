#include <iostream>
using namespace std;
void printName(int index, int time)
{
    if (index >= time)
    {

        return;
    }
    cout << "malik"<<endl;
    printName(index + 1, time);
}
int main()
{
    int index = 0;
    int time = 5;
    printName(index, time);
    return 0;
}