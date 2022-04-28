#ifndef ATTENDANCE_MANAGEMENT_H
#define ATTENDANCE_MANAGEMENT_H

#include <iostream>
#include "../include/Student.hpp"
#include "../include/Course.hpp"
#include <fstream>

using namespace std;

class AttendanceManagement
{
public:
    AttendanceManagement();
    ~AttendanceManagement();
    void takeAttendance (Student * student, Course * course, string dateTime, bool state);
    void showAttendance()const;
};


#endif //ATTENDANCEMANAGEMENT_H