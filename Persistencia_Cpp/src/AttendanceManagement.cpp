#include "../include/AttendanceManagement.hpp"

// Constructor
AttendanceManagement::AttendanceManagement()
{

}

void AttendanceManagement::takeAttendance(Student* student, Course* course, string datetime, bool state)
{

    ifstream testOpenFile("attendance.csv");
    bool fileExists = testOpenFile.good();
    testOpenFile.close();

    ofstream csvFile;
    csvFile.open("attendance.csv", ofstream::app);

    if(!fileExists)
    {

        csvFile << "Id de Estudiantes, "
                << "Nombre/s, "
                << "Apellido/s, "
                << "Id de Materia, "
                << "Marca temporal, "
                << "Presente\n";
    }

    csvFile << student->getIdentifier() << ", "
            << student->getName() << ", "
            << student->getSurname() << ", "
            << course->getIdentifier() << ", "
            << course->getName() << ", "
            << datetime << ", "
            << state << "\n";

    csvFile.close();
}

void AttendanceManagement::showAttendance()
{

    ifstream csvFile("attendance.csv");

    if(csvFile.is_open())
    {
        // Toma el contenido del csv para mostrarlo en la salida estandar
        cout << csvFile.rdbuf();
    }
        
    csvFile.close();
}

// Destructor
AttendanceManagement::~AttendanceManagement()
{

}