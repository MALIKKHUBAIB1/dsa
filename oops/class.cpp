#include <iostream>
#include <string.h>
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
        this->id = id;//this point to the varibale 
        this->name = name;
        this->age = age;
        this->present = present;
        this->nos = nos;
        this->gf = gf;
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

    Student s1;
    Student s2(123, "chota bheem", 12, 1, 6, "chutki");
    cout << s2.name << endl;
    cout << s2.present << endl;
    
    return 0;
}