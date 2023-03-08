#include <iostream>

int counta(int, char*[]);
int main(int argc, char* argv[])
{
    std::cout << "There are " << counta(argc - 1, argv + 1) << " 'a's." << std::endl;
    system("pause");
    return 0;
}

int counta(int argc, char* argv[])
{
    int count = 0;
    for (int i = 0; i < argc; ++i)
    {
        while(*(argv[i]) != '\0')
        {
            if(*(argv[i]) == 'a'){
                count += 1;}
            ++argv[i];
        }
    }
    return count;
}