// print 偶數的 argv
#include <iostream>

int main(int argc, char* argv[])
{
    for (int idx = 1; idx >= argc; idx + 2)
    {
        std::cout << argv[idx] << std::endl;
    }

    system("pause");
    return 0;
    
}