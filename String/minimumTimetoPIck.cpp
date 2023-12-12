#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> garbage = {"MMM", "PGM", "GP"};
    vector<int> travel = {3, 10};
    int countG = 0;
    int countP = 0;
    int countM = 0;
    int indexG = 0;
    int indexP = 0;
    int indexM = 0;
    for (int i = 0; i < garbage.size(); i++)
    {
        // cout << garbage[i].length() << endl;
        string str = garbage[i];
        for (int j = 0; j < str.length(); j++)
        {
            char ch = str[j];
            if (ch == 'P')
            {
                indexP = i;
                countP++;

                // cout << indexP << endl;
            }
            if (ch == 'G')
            {
                countG++;
                indexG = i;
                // cout << indexG << endl;
            }
            if (ch == 'M')
            {
                countM++;
                indexM = i;
                // cout << indexM << endl;
            }
        }
    }
    // cout << countG << endl;
    // cout << countM << endl;
    // cout << countP << endl;
    int travelG = 0;
    int travelP = 0;
    int travelM = 0;
    // cout << indexG << endl;
    // cout << indexP << endl;
    // cout << indexM << endl;
    for (int i = 0; i < indexG; i++)
    {
        travelG = travelG + travel[i];
    }
    for (int i = 0; i < indexP; i++)
    {
        travelP = travelP + travel[i];
    }
    for (int i = 0; i < indexM; i++)
    {
        travelM = travelM + travel[i];
    }
    cout << travelG << endl;
    cout << travelP << endl;
    cout << travelM << endl;
    int totalTime = travelG + travelP + travelM + countG + countM + countP;
    cout << totalTime << endl;

    return 0;
}