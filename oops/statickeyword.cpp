#include <iostream>
using namespace std;
class abc
{

public:
  static int x, y;
  void print()
  {
    cout << x <<","<< y << endl;
  }
};
int abc::x;
int abc::y;
int main()
{
  abc obj1;
  abc obj2;
  obj1.x = 20;
  obj1.y = 1;
  obj2.x = 21;
  obj2.y = 12;
  obj1.print();
  // obj2.print();
  return 0;
}