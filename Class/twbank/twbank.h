namespace twbank
{
    class account
    {
        private:
            int m_money;

        public:
            account();
            explicit account(float money);

            int deposit(int money);
            int withdraw(int money);
            const int balance();
    };
}