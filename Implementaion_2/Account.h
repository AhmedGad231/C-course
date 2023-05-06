#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
using std::string;
class Account{
private:
    double balance;
    string name;
public:
void set_balance (double bal);
double get_balance();
void set_name(string n);
string get_name();

bool deposit(double amount);
bool withdraw (double amount);
};

#endif // _ACCOUNT_H_
