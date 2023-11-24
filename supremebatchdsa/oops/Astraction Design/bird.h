#if !defined(Bird_H)
#define Bird_H
#include <iostream>
using namespace std;
class Bird
{
public:
  virtual void fly() = 0;
  virtual void eat() = 0;
  // class that inherits from to the class
  // has to implement pure virtual functions
};

class Sparrow : public Bird
{
public:
  void fly()
  {
    cout << "sparrow is flying" << endl;
  }
  void eat()
  {
    cout << "sparrow is eating" << endl;
  }
};
class eagle : public Bird
{
public:
  void fly()
  {
    cout << "Eagle is flying" << endl;
  }
  void eat()
  {
    cout << "Eagle is eating" << endl;
  }
};
class peiogn : public Bird
{
public:
  void fly()
  {
    cout << "Peiogn is flying" << endl;
  }
  void eat()
  {
    cout << "Peiogn is eating" << endl;
  }
};
#endif 
// Bird_H
