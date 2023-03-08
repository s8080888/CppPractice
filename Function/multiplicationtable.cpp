#include <iostream>

void NineNineMultiplicationTable();
void NineNineMultiplicationTable(int[]);
int main(int argc, char *argv[])
{
    int k[]{1, 4, 5, 6, 2, 3, 8, 7, 9};
    NineNineMultiplicationTable(k);
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
void NineNineMultiplicationTable(int order[])
{
    int size = 9;
    for(int i = 0;i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << (order[i]) << " x " << order[j] << " = " << order[i] * order[j] << " ";
        }
        std::cout << std::endl;
    }
}