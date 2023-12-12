#include <iostream>
using namespace std;
// polymorphism
// diffrent parameter or diffrent retrun is called polymorphism
// int add(int x, int y)
// {
//   return x + y;
// }
// double add(double x, double y)
// {
//   return x + y;
// }
// int add(int x, int y, int z)
// {
//   return x + y + z;
// }

class Vector
{
private:
  int x, y;

public:
  // Vector(int x, int y)
  // {
  //   this->x = x;
  //   this->y = y;
  // }
  Vector(int x, int y) : x(x), y(y) {} // same as Vector(int x, int y){this->x = x;
  //   this->y = y;
  // }}
  void operator+(const Vector &src)
  {
    // this will point to the v1;
    // src would be point to the v2
    // this->x = this->x + src.x;
    // this->y = this->y + src.y;
    // or
    this->x += src.x;
    this->y += src.y;
  }
  void operator-(const Vector &src)
  {
    // this will point to the v1;
    // src would be point to the v2
    // this->x = this->x + src.x;
    // this->y = this->y + src.y;
    // or
    this->x -= src.x;
    this->y -= src.y;
  }
  void display()
  {
    cout << x << " ";
    cout << y << " ";
    cout << endl;
  }
};

int main()
{
  // cout << add(1, 4) << endl;
  // cout << add(3.4, 4.6) << endl;
  // cout << add(1, 2, 3) << endl;
  Vector v1(1, 2);
  Vector v2(2, 2);
  // Vector v3(4, 2);
  // v1 + v2;
  v1 - v2;

  v1.display();
  // v2.display();
  // v3.display();

  return 0;
}