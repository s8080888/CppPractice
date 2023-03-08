#include <iostream>

const char *categorize(const int, const int, const int, const int);
int main(int argc, char *argv[])
{
    // to know 10 ???
    // 0 - 5 --- small
    // 5 - 20 ---medium
    // 20 - 30 --- large
    // >30 --- extra large
    std::cout << categorize(50, 5, 20, 30) << std::endl;
}

const char *categorize(const int input, const int small, const int medium, const int large)
{
    if (input <= small)
    {
        return "small";
    }
    else if (input <= medium)
    {
        return "medium";
    }
    else if (input <= large)
    {
        return "large";
    }
    else
    {
        return "extraLarge";
    }
}
