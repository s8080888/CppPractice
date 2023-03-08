#pragma once
#include "../human/human.h"
#include <vector>

class family
{
    private:
        size_t longest;
        std::vector<human> m_family;
    public:
        family();
        //std::ostream& operator<<();
        ~family();

        void add_member(human);
        const std::string longest_name_member();
        int has_member_with_name(std::string);
};