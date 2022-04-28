#include "../include/AttendanceManagement.hpp"

AttendanceManagement::AttendanceManagement(){}


void AttendanceManagement::takeAttendance (Student * student, Course * course, string dateTime, bool state)
{
    //Lectura del archivo
    ifstream file("attendance.csv");
    bool fileOK=file.good();
    file.close();

    // Creo el archivo de la base de datos
    ofstream ddbb("attendance.csv",ios::app);

    if(!fileOK)
    {
        ddbb<<"Ide,"
            <<"Nombre,"
            <<"Apellido,"
            <<"Curso,"
            <<"Fecha,"
            <<"Estado,\n";    
       
    }else{

    //Se escriben los datos en la base
    ddbb<<student->getIdentifier()
    <<","<<student->getName()
    <<","<<student->getSurname()
    <<","<<course->getName()
    <<","<<dateTime
    <<","<<state<<endl;    
    }

    ddbb.close();  
}
void AttendanceManagement::showAttendance()const 
{
    ifstream file("attendance.csv");
    if(file.is_open())
    {
        cout << file.rdbuf();
        
    }
}


AttendanceManagement::~AttendanceManagement(){}