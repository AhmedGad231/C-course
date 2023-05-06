#include <iostream>  
using namespace std;
int main(){
    const int valueindollar{100},valueinQUARTER{25},valuedime{10},valuenickle{5},valuepennies{1};
    int change_value{0};
    cout<<"Enter the change in cents"<<endl;
    cin>>change_value;
    cout<< "The Change value he enter is: "<<change_value<<endl;
    int balance{},dollars{},quarters{},dime{},nickle{},penny{};
    dollars = change_value/valueindollar;
    balance = change_value%valueindollar;
    quarters= balance/valueinQUARTER;
    balance %= valueinQUARTER;
    dime    = balance/valuedime;
    balance %= valuedime;
    nickle = balance/valuenickle;
    balance %= valuenickle;
    penny=balance;
    
    cout<< "The change Equal "<<endl;
    cout<< "dollars: "<<dollars<<endl;
    cout<< "quarters: "<<quarters<<endl;
    cout<< "dimes: "<<dime<<endl;
    cout<< "nickles: "<<nickle<<endl;
    cout<< "pennies: "<<penny<<endl;
    return 0;
}
