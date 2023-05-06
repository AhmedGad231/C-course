#include <iostream>  
using namespace std;
int tripleCallByValue(int);
void tripleCallByReference(int &);
int main(){
    int num{0};
    cout<<"Enter an integer: ";
    cin>>num;
    cout<<"Value before call to tripleCallByValue() is: "<<num<<endl;
    cout<<"Value returned from tripleCallByValue() is: "<<tripleCallByValue(num)<<endl;
    cout<<"Value (in main) after tripleCallByValue() is: "<<num<<endl;
    cout<<endl;
    cout<<"Value before call to tripleCallByReference() is: "<<num<<endl;
    tripleCallByReference(num);
    cout<<"Value (in main) after tripleCallByReference() is: "<<num<<endl;
    return 0;
}
int tripleCallByValue(int n1){
    n1*=3;
    return n1;
}
void tripleCallByReference(int &n1){
    n1*=3;
}
