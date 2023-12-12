#include <iostream>
using namespace std;

// inheritence
class Bird
{
public:
  int age;
  int weight;
  int nol; // number of legs;
  string color;
  // behavior
  void eat()
  {
    cout << "Bird is eating" << endl;
  }
  void fly()
  {
    cout << "Bird isfly" << endl;
  }
};
// inheritance
// copying property of Bird intto sparrow
class Sparrow : public Bird
{
public:
  Sparrow(int age, int weight, string color, int nol)
  {
    this->age = age;
    this->weight = weight;
    this->color = color;
    this->nol = nol;
  }
  void grassing()
  {
    cout << "grassing" << endl;
  }
};
class Peiogn : public Bird
{
public:
  Peiogn(int age, int weight, string color, int nol)
  {
    this->age = age;
    this->weight = weight;
    this->color = color;
    this->nol = nol;
  }
  void guttering()
  {
    cout << "guttering" << endl;
  }
  void eat()
  {
    cout << "eat" << endl;
  }
};
int main()
{
  Sparrow s(2, 1, "white", 2);
  cout << s.age << endl;
  Peiogn pe(3, 1, "marron", 2);
  pe.color = "pink";
  cout << pe.color << endl;
  return 0;
}