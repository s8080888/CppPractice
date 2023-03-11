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

    for(const human& nowHuman : m_family)
    {
        if(longest_name == nullptr || longest_name->name().size() > nowHuman.name().size())
        {
            longest_name = &nowHuman;
        }
    }
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