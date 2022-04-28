#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>

using namespace std;

class Course
{
private:
    int  identifier;
    string name;
public:
    Course();
    int getIdentifier() const;
    void setIdentifier(int _identifier);
    string getName() const;
    void setName(string _name);
    virtual ~Course();
};


#endif //COURSE_H