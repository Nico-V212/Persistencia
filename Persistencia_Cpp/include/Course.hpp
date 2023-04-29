#ifndef course_hpp
#define course_hpp

    #include <iostream>
    #include <string>

    using namespace std;

    class Course
    {
        private:
            
            int m_identifier;
            string m_name;
            string m_surname;

        public:

            Course(/* args */);
            
            // Setters
            void setIdentifier(int identifier);
            void setName(string name);
            void setSurname(string surname);

            // Getters
            int getIdentifier() const;
            string getName() const;
            string getSurname() const;

            ~Course();
    };

#endif