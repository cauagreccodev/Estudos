#include <string>
using std::string;

class Account{
    public:
        Account(string name, int initialBalance);

        void setClientName(string name);
        string getClientName() const;

        int credit(int amount);
        int debit(int amount);

        int getBalance() const;

        void displayClientName() const;
        void displayValue() const;

    private:
        string clientName;
        int value;
};