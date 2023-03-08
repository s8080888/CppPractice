#include<iostream>

int main(int argc, char* argv[])
{
    int time_ = 9;
    for (int k = 0; k < time_; k++)
    {
        for (int i = 0; i < (time_ - k - 1); i++)
        {
            std::cout<< " ";
        }
        for (int j = 0; j < (k * 2) + 1; j++)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
    //system("pause");
    return 0;
}