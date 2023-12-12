#include <iostream>
#include <algorithm>
using namespace std;
string addRE(string num1, string num2, int p1, int p2, int carry)
{
    // base case
    if (p1 < 0 && p2 < 0)
    {
        if (carry != 0)
        {
            return string(1, carry + '0');
        }

        return "";
    }
    //  agar n1 bada hai zeros e then minus karna hai '0' se
    //  and agar chota hai to zero bhej na hai;
    //  ek case
    int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
    int n2 = (p2 >= 0 ? num1[p2] : '0') - '0';
    int sum = n1 + n2 + carry;
    int digit = sum % 10;
    carry = digit / 10;
    string ans = "";

    ans.push_back(digit + '0');
    // baki case

    ans += addRE(num1, num2, p1 - 1, p2 - 1, carry);

    return ans;
}
int main()
{
    string num1 = "456";
    string num2 = "77";
    int p1 = num1.size() - 1;
    int p2 = num2.size() - 1;
    int carry = 0;

    string ans = addRE(num1, num2, p1, p2, carry);
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;

    return 0;
}