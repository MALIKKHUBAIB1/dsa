#include <iostream>
using namespace std;
// Macros
#define PI 3.14569
#define MAXX(x, y) (x > y ? x : y)
// area of circle
float areaOfCircle(float r)
{
  float area = PI * r * r;
  return area;
}
float perimeter(float r)
{
  float peri = 2 * PI * r;
  return peri;
}
void fun(int x, int y)
{
  int x = 10;
  int y = 2;
  int c = MAXX(x, y);
}
void fun1(int x, int y)
{
  int x = 20;
  int y = 2;
  int c = MAXX(x, y);
}
void fun2(int x, int y)
{
  int x = 30;
  int y = 7;
  int c = MAXX(x, y);
}
int main()
{
  float x = areaOfCircle(3);
  cout << x << endl;
  cout << perimeter(3.4) << endl;
  return 0;
}