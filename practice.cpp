#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <string>
#include <iterator>
int main(int argc, char* argv[])
{
    std::vector<int> i {5,6,7,5,4};
    std::vector<int>::iterator k = std::begin(i);
    std::cout << *k;
}