#include <iostream>
#include <cstdio>

void printTree(size_t lines, size_t space, size_t cut);
int main(int argc, char* argv[])
{
    printTree(10,1,3);
    printTree(10,3,6);
    return 0;

}
//Answer


void printTree(size_t lines, size_t start, size_t end)
{
    for (int k = start; k <= end; k++)
    {
        for (int i = 1; i <= (lines - k); i++)
        {
            std::cout << " ";
        }
        for (int j = 1; j < (k * 2) + 1; j++)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}
