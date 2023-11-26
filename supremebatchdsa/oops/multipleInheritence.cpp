#include <iostream>
using namespace std;
class Person
{
public:
  void walk()
  {
    cout << "walking..." << endl;
  }
};
class Teacher : virtual public Person
{
public:
  void teach()
  {
    cout << "teaching" << endl;
  }
};
class Resercher : virtual public Person
{
  void reserch()
  {
    cout << "resercher" << endl;
  }
};
class Professor : public Teacher, public Resercher
{
public:
  void bore()
  {
    cout << "boaring..." << endl;
  }
};
int main()
{
  Professor p;
  // yaha par abigoius problem ho raha hai so we use scope resolution and virtual to fixed the Diamond problem

  // Diamond Problem
  // solution 1
  //  1:  scope resolution

  // p.Teacher::walk();
  // p.Resercher::walk();
  //  2: virtual
  p.walk();
  p.teach();
  p.bore();
  return 0;
}