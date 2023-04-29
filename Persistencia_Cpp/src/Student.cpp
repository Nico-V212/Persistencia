#include "../include/Student.hpp"

// Constructor
Student::Student()
{

}

// Setters
void Student::setIdentifier(int identifier)
{
    m_identifier = identifier;
}

void Student::setName(string name)
{
    m_name = name;
}

void Student::setSurname(string surname)
{
    m_surname = surname;
}

// Getters
int Student::getIdentifier()
{
    return m_identifier;
}

string Student::getName()
{
    return m_name;
}

string Student::getSurname()
{
    return m_surname;
}

// Destructor
Student::~Student()
{

}