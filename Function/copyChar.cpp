#include <iostream>

void my_strcpy(const char[], char[], size_t);
int main(int argc, char* argv[])
{
    char copy[50];
    my_strcpy("abc", copy, 50);

    std::cout << copy << std::endl; //abc
    return 0;
}

void my_strcpy(const char input[], char k[], size_t size)
{
    for(int i = 0;i < size - 1;++i)
    {
        if(input[i] == '\0')
        {
            k[i] = '\0';
            return;
        }
        else
        {
            k[i] = input[i];
        }
    }
    k[size] = '\0';
}