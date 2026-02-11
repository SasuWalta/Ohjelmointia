#include "student.h"

Student::Student(string n, int i)
{
    name = n;
    age = i;
}

void Student::setAge(int a)
{
    age = a;
}

int Student::getAge() const
{
    return age;
}
string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

void Student::printStudentInfo()
{
    cout << "Name: " << name << " Age: " << age << endl;
}