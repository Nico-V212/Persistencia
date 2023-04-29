#include <iostream>
#include "./include/AttendanceManagement.hpp"
#include "./include/Student.hpp"
#include "./include/Course.hpp"

using namespace std;

int main()
{
    Student* student = new Student();
    student->setIdentifier(1);
    student->setName("Raul");
    student->setSurname("Jimenez");

    Course* course = new Course();
    course->setIdentifier(1);
    course->setName("Matematica");

    AttendanceManagement* attendanceManagement = new AttendanceManagement();
    attendanceManagement->takeAttendance(student, course, "2021-06-08", true);

    attendanceManagement->showAttendance();

    delete student;
    delete course;
    delete attendanceManagement;

    return 0;
}