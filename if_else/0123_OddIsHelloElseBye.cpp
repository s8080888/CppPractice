#include <iostream>
#include <cstdint>

int main(int argc, char* argv[])
{
    const int x = (argc - 1) % 2;
    //const int8_t = (argc - 1) % 2;
    if((argc - 1) % 2 == 0)
    {
        std::cout << "Hello";
    }
    else
    {
        std::cout << "Bye Bye";
    }
    system("pause");
}