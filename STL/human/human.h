#pragma once
#include <string>

class human
{
    public:
        explicit human();
        explicit human(const char[]);
        explicit human(const std::string&);
        explicit human(std::string&&);
        ~human();

        void set_name(const char[]);
        void set_name(const std::string&);
        void set_name(const std::string&&);
        std::string name() const;

        unsigned int LenghtSize();
        

    private:
        std::string m_name;
    /*
    public:
        explicit human();
        explicit human(const char*);
        explicit human(std::string&);
        ~human();

        void set_name(std::string);
        void set_name(const char*);
        std::string name() const;

    private:
        std::string m_name;
*/
};  
