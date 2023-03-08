// 請使用手動編譯：g++ .\twbankMain.h .\twbank\twbank.cpp -o twbank
#include "twbank/twbank.h"
#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    twbank::account acc1;
    twbank::account acc2;

    acc1.deposit(400);
    acc1.withdraw(500);

    std::cout << std::boolalpha
              << acc1.withdraw(500) << std::endl;

    std::cout << acc1.balance() << std::endl;

    system("pause");
}