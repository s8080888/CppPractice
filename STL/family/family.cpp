#include "family.h"

family::family()
:longest(0)
{ }

family::~family(){ }

void family::add_member(human family)
{
    m_family.push_back(family);
}

const std::string family::longest_name_member()
{
    std::string longestName;
    for(human nowHuman : m_family)
    {
        if(!longest || nowHuman.LenghtSize() > longest)
        {
            longestName = nowHuman.name();
            longest = nowHuman.LenghtSize();
        }
    }
    return longestName;
}

int family::has_member_with_name(std::string whoName)
{
    for(human nowHuman : m_family)
    {
        if(nowHuman.name() == whoName)
        {
            return 1;
        }
    }

    return 0;
}