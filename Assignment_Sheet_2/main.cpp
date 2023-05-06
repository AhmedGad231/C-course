#include <iostream>  
using namespace std;
int main(){
    int a{0},b{0};
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;
    int *ptrA{nullptr},*ptrB{nullptr};
    ptrA=&a;
    ptrB=&b;
    cout<<"The First number you entered is "<<*ptrA<<"\n"<<"The Second number you entered is "<<*ptrB<<endl;
    return 0;
}
