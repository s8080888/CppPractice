#include "twbank.h"
namespace twbank
{
    account::account():m_money(0){      
    }

    account::account(float money)
    :m_money(money){        
     }

    int account::deposit(int PutMoney)
    {
        m_money += PutMoney;
        return m_money;
    }
    int account::withdraw(int TakeMoney)
    {
        if(m_money < TakeMoney)
        {
            return 0;
        }
        else
        {
            m_money -= TakeMoney;
            return m_money;
        }
    }
    const int account::balance()
    {
        return m_money;
    }
}