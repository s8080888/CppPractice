#include "family.h"
#include <utility>
#include <iostream>


void family::add_member(human family)
{
    m_family.push_back(std::move(family));
}

const human& family::longest_name_member() const
{
    
    const human* longest_name = nullptr;
    for(auto it = m_family.cbegin(), end = m_family.cend();it != end; ++it)
    {
        if(longest_name == nullptr || (*it).name().size() > longest_name->name().size())
        {
            longest_name = &(*it);
        }
    }
    /*
    for(const human& nowHuman : m_family)
    {
        if(longest_name == nullptr || nowHuman.name().size() > longest_name->name().size())
        {
            longest_name = &nowHuman;
        }
    }
    */

    return *longest_name;
    
}

bool family::has_member_with_name(const std::string& whoName) const
{
    for(const human& nowHuman : m_family)
    {
        if(nowHuman.name() == whoName)
        {
            return true;
        }
    }

    return 0;
}

std::ostream& operator<<(std::ostream& ostm, const human& human)
{
    return ostm << human.name();
}