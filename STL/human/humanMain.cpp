#include <iostream>
#include <cstdlib>
#include <utility>
#include "human.h"

int main(int argc, char* argv[])
{

    human h1("Name");
    human h2(std::string("name"));
    //human h3 = "Name"; //error

    const std::string name = "TestName";
    human h4(name); //copy

    std::string nonconst_new_name = "NonNew Name";
    h1.set_name(std::move(nonconst_new_name));
    
    const std::string new_name = "New_Nmae";
    h1.set_name(new_name); // new_name is reference

    h1.set_name(std::string("std::string(New Name)")); // move
    h1.set_name("const char* New Name");

    std::cout << h1.name() << std::endl;
}