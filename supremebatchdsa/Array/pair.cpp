#include <iostream>

using namespace std;
int main()
{
    int arr[] = {8, 11, 7, 15, 2};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            for (int z = j + 1; z < 5; z++)
            {
                cout << "(" << arr[i] << "," << arr[j] << "," << arr[z] << ")" << endl;
            }
        }
    }

    return 0;
}