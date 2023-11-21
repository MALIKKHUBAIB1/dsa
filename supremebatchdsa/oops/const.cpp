#include <iostream>
using namespace std;

// getter setter
class abc
{
  int x;
  int *y;

public:
  abc()
  {
    x = 20;
    // *y gives you error
    y = new int(10);
  }
  abc(int _x, int _y)
  {
    x = _x;
    // *y gives you error
    *y = _y;
  }
  int getX() const // means that ki ab ye kisi method ko mdify nhi kar skata
  {
    // x = 50 yaha par hum x ki value cahnge nhi akr sakte beacs of the const method
    return x;
  }
  void setX(int _val)
  {
    x = _val;
  }
  int getY() const
  {
    return *y;
  }
  void setx(int _val)
  {
    *y = _val;
  }
};
void printAbc(const abc &a)
{
  cout << a.getX()<<"," << a.getY() << endl;
}
int main()
{
  // const int x = 100;
  // x = 10;
  // cout << x << endl;
  // int *a = new int;
  // *a = 2;
  // cout << *a << endl;
  // delete a;
  // int b = 10;
  // a = &b;
  // cout << *a << endl;

  // const int *x = new int(10);
  // cout << *x << endl;

  // int b = 20;
  // x = &b;
  // cout << *x << endl;

  abc a(1, 2);
  printAbc(a);
  // cout << a.getX() << endl;
  // cout << a.getY() << endl;
  return 0;
}