#include <string>

using namespace std;

#ifndef student_hpp
#define student_hpp

    class Student
    {
        private:
            
            int m_identifier;
            string m_name;
            string m_surname;

        public:

            Student(/* args */);
            
            // Setters
            void setIdentifier(int identifier);
            void setName(string name);
            void setSurname(string surname);
            
            // Getters
            int getIdentifier();
            string getName();
            string getSurname();

            ~Student();
        
    };
    
#endif