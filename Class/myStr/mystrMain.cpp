#include <iostream>
#include "mystr.h"

using namespace std; 
int main(int argc, char* argv[])
{
    str s;
    s.append("addda");

    cout << s.cstr() << endl << s.len();
}