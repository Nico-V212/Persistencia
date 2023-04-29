#ifndef attendancemanagement_hpp
#define attendancemanagement_hpp

    #include <iostream>
    #include <fstream>
    #include <string>
    #include "Student.hpp"
    #include "Course.hpp"

    using namespace std;

    class AttendanceManagement
    {
        public:

            AttendanceManagement();

            void takeAttendance(Student* student, Course* course, string datetime, bool state);
            void showAttendance();
            
            ~AttendanceManagement();
    };



#endif
