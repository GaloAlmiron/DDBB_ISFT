//--------- IMPLEMENTACION ------------------
#include "../include/Course.hpp"

Course::Course(){}


int Course::getIdentifier() const
{
    return identifier;
}

string Course::getName() const
{
     return name;
}

void Course::setIdentifier(int _identifier)
{
     identifier=_identifier;
}

void Course::setName(string _name)
{
    name=_name;
}


 Course:: ~Course(){}