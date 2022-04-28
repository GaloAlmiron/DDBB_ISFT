#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;


class Student
{
private:
    int  identifier;
    string name;
    string surname;
public:
    Student();
    int getIdentifier() const;
    void setIdentifier(int _identifier);
    string getName() const;
    void setName(string _name);
    string getSurname() const;
    void setSurname(string _surname);
    ~Student();
};




#endif //STUDENT_H