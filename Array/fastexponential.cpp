// very Importtant for comptetive program;
#include <iostream>
using namespace std;
int fastExponetial(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b % 2 == 1) // we can also wite as if(b&1)
        // it is alos equal to the odd case bust it best practice
        //  to do this beacuse modulo oprator is very high oprator so we avoid to do this
        {
            ans = (ans * a);
        }
        a = a * a;
        b = b >> 1;
    }
    return ans;
}
int slowExponential(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{

    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << "slowExpo : " << slowExponential(a, b) << endl; // Tc<--O(b);
    cout << "Fastexpo : " << fastExponetial(a, b) << endl;  // Tc O(log(b))
    return 0;
}