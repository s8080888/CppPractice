#include <iostream>

void print_value(int);
void print_value(bool);
void print_value(char*);
int main(int argc, char* argv[])
{
    print_value(1);
    print_value(true);
    print_value("abc");
}
void print_value(int i)
{
    std::cout << "Number! " << i << std::endl;
}
void print_value(bool b)
{
    if (b)
    {
        std::cout << true;
    }
    else
    {
        std::cout << false;
    }
    std::cout << std::endl;
}
void print_value(char* input)
{
    std::cout << "String! " << input << std::endl;
}