#include "mystr.h"

str::str():
m_len(0),
m_capacity(10),
m_str(new char[m_capacity])
{
    m_str[0] = '\0';
}

str::~str()
{
    delete[] m_str;
}

void str::append(char c)
{
    if(m_len + 1 >= m_capacity)
    {
        const unsigned int new_capacity = 2 * m_capacity;
        char* new_str = new char[new_capacity];

        for(int i = 0;i < m_len; i++)
        {
            new_str[i] = m_str[i];
        }

        delete[] m_str;
        m_str = new_str;
        m_capacity = new_capacity;
    }

    m_str[m_len++] = c;
    m_str[m_len] = '\0';
}

void str::append(char c[])
{
   while(c[0] != '\0')
   {
        append(c[0]);
        ++c;    
   } 
}

const char* str::cstr() const
{
    return m_str;
}
int str::len() const
{
    return m_len;
}
