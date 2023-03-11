#include <iostream>
#include <utility>
#include "../human/human.h"
#include "family.h"
// cd family folder
//g++ .\family.cpp ..\human\human.cpp .\familyMain.cpp -o family
int main(int argc, char* argv[])
{
    family f;
    f.add_member(human{"Mona"});

    const human dada{"Dada"};
    f.add_member(dada);

    human xiao{"Xiao Xiao"};
    f.add_member(std::move(xiao));

    //Dada
    std::cout << dada << std::endl;

    //Xiao Xiao
    std::cout << f.longest_name_member() << std::endl;

    // true
    std::cout << std::boolalpha << f.has_member_with_name("Mona") << std::endl;
    // false
    std::cout << std::boolalpha << f.has_member_with_name("Cookie") << std::endl;
}