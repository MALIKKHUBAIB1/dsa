#include <iostream>
using namespace std;
class AbastractionExample
{
private: // by making these data members private we have hidden then form outside world
  int num;
  char ch;

public:
  void setMyvalues(int n, char c) // these data members are not accessible outside the calss
  {
    num = n;
    ch = c;
  }
  // they only set and get the values through the public function
  void getMyvalues()
  {
    cout << "Number is :" << num << endl;
    cout << "charecter is :" << ch << endl;
  }
};
int main()
{
  AbastractionExample myExample;
  myExample.setMyvalues(2893, 'a');
  myExample.getMyvalues();
  return 0;
}