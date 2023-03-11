#pragma once
#include "../human/human.h"
#include <vector>
#include <iosfwd>

class family
{
    private:
        std::vector<human> m_family;
    public:

        void add_member(human);
        const human& longest_name_member() const;
        bool has_member_with_name(const std::string&) const;
};

std::ostream& operator<<(std::ostream&, const human&);