#include <iostream>
using namespace std;
class A
{
private:
  int x;

public:
  A(int x) : x(x){};
  int getX() const
  {
    return x;
  };
  void setX(int _val)
  {
    x = _val;
  }
  friend class B;
};

class B
{
public:
  void print(const A &a)
  {
    // cout << a.getX() << endl;
    cout << a.x << endl;
  }
};
int main()
{
  A a(100);
  B b;
  b.print(a);
  return 0;
}