#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <string>
int main(int argc, char* argv[])
{
    int array[]{1, 2, 3, 4, 5};
    for (int *it = array; it != array + 5; ++it)
    {
        //pointer arithmetic
        std::cout << *it << std::endl;
    }
}