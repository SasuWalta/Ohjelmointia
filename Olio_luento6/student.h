#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <vector>

using namespace std;

class Student
{
public:
    Student(string n, int i);
    void setAge(int);
    int getAge() const;
    string getName() const;
    void setName(const string &newName);

    void printStudentInfo();

private:
    int age;
    string name;
};

#endif