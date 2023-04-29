#include "../include/Course.hpp"

// Constructor
Course::Course()
{

}

// Setters
void Course::setIdentifier(int identifier)
{
    m_identifier = identifier;
}
void Course::setName(string name)
{
    m_name = name;
}
void Course::setSurname(string surname)
{
    m_surname = surname;
}

// Getters
int Course::getIdentifier() const
{
    return m_identifier;
}
string Course::getName() const
{
    return m_name;
}
string Course::getSurname() const
{
    return m_surname;
}

// Destructor
Course::~Course()
{

}