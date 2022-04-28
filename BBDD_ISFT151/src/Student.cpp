//--------- IMPLEMENTACION ------------------
#include "../include/Student.hpp"

Student::Student(){}             


int Student::getIdentifier()const
{
    return identifier;
}

string Student::getName() const
{
    return name;
}

string Student::getSurname() const
{
    return surname;
}

void Student::setIdentifier(int _identifier)
{
    identifier=_identifier;
}

void Student::setName(string _name)
{
    name=_name;
}

void Student::setSurname(string _surname)
{
    surname=_surname;
}


Student::~Student(){}