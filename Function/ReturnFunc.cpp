#include <iostream>

int printNum(int number);
int (* giveMeFunc())(int);

int main(int argc, char* argv[])
{
    std::cout << giveMeFunc()(2);
    return 0;
}
int printNum(int number)
{
    return 2;
}


int (* giveMeFunc())(int number)
{
    return &printNum;
}