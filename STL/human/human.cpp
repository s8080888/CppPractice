#include "human.h"
#include <utility>
#include <string>
#include <iostream>

human::human()
{ }

human::human(const char name[])
:m_name(name)
{}
human::human(const std::string& other)
:m_name(other)
{ }
human::human(std::string&& other)
:m_name(std::move(other))
{ }
human::~human()
{ }

void human::set_name(const char otherString[])
{
    m_name = otherString;
}
void human::set_name(const std::string& otherString)
{
    m_name = otherString;
}
void human::set_name(const std::string&& otherString)
{
    m_name = std::move(otherString);
}
std::string human::name() const
{
    return m_name;
}


/*
human::human(const char* name)
:m_name(name)
{ }

human::~human()
{}

human::human(std::string other)
:m_name(other)
{ }

void human::set_name(std::string other)
{
    m_name = std::move(other);    
}

void human::set_name(const char* otherString)
{
    m_name = otherString;
}
std::string human::name() const
{
    return m_name;
}
*/