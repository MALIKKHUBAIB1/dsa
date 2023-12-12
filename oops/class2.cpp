#include <iostream>
using namespace std;

class Student
{
private:
  string gf;

public:
  int id;
  string name;
  int age;
  bool present;
  int nos;

  // default constructor
  Student()
  {
    cout << "default constructor" << endl;
  }
  // parametised constructor
  Student(int id, string name, int age, bool present, int nos, string gf)
  {
    // id = id; if we write like this then compiler is confused becs both are same  so we use this keyword
    // this keyword is used to point the current object
    this->id = id; // this point to the varibale
    this->name = name;
    this->age = age;
    this->present = present;
    this->nos = nos;
    this->gf = gf;
  }
  // in the copy constructor we can not copy function we can copy only the varibale
  Student(const Student &srcobj)
  {
    this->id = srcobj.id;
    this->name = srcobj.name;
    this->age = srcobj.age;
    this->present = srcobj.present;
    this->nos = srcobj.nos;
  }

  void bunk()
  {
    cout << "Bunk" << endl;
  }
  void sleep()
  {
    cout << "sleeping" << endl;
  }
  void study()
  {
    cout << "study" << endl;
  }

private:
  void chatting()
  {
    cout << "chatting" << endl;
  }
};

int main()
{
  Student s1(1, "chota bheem", 12, 1, 6, "chutki");

  // in this below line deafult constructor will not be called
  //  Student s2 = s1;// copy constructor
  Student s2 = s1; // deafult constructor will be called because there is no parameter
  // s2 = s1;
  // Student s2(s1);second method of calling the copy constructor
  cout << s1.name << endl;
  cout << s2.name << endl;

  return 0;
}