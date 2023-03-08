#include <iostream>

void NineNineMultiplicationTable();
int main(int argc, char *argv[])
{
    NineNineMultiplicationTable();
}
void NineNineMultiplicationTable()
{
    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9; ++j)
        {
            std::cout << i << " x " << j << " = " << i * j << " ";
        }
        std::cout << std::endl;
    }
}