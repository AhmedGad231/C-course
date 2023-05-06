#include <iostream>  
#include "Account.h"
using namespace std;
int main(){
  Account obj1;
    double num{},amount{}, amount2{};
    string Agent{};
    cout<<"Enter your name account please: ";
    cin>>Agent;
    cout<<endl;
    cout<<"Thank you enter the last balance you have for verifying: ";
    cin>> num;
    cout<<endl;
    cout<<"Enter the money you want to deposit  it from a class: ";
    cin>>amount ;
    cout<<endl;
    cout<<"Enter the money you want to withdraw  it from a class: ";
    cin>>amount2 ;
    cout<<endl;
    obj1.set_name(Agent);
    obj1.set_balance(num);
    cout <<"The Account name is: "<<obj1.get_name()<<"  The balance you have: "<< obj1.get_balance()<<endl;
    if(obj1.deposit(amount)){
        cout<<"Deposit ok..." <<endl<<"------------------------"<<endl<<"The balance you have: "<<obj1.get_balance()<<endl;
    }else{
        obj1.set_balance(num);
        cout<<"Deposit Not Allowed..."<<endl<<"------------------------"<<endl<<"The balance you have: "<<obj1.get_balance()<<endl;
    }
    if(obj1.withdraw(amount2)){
        cout<<"Withdraw ok..." <<endl<<"------------------------"<<endl<<"The balance you have: "<<obj1.get_balance()<<endl;
    }else{
       cout<<"Withdraw Not Allowed..."<<endl<<"------------------------"<<endl<<"The balance you have: "<<obj1.get_balance()<<endl; 
    }
    return 0;
}
