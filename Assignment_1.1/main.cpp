#include <iostream>  
using namespace std;
void multiplefunc(int,int);
int main(){
    int num1{},num2{};
    do{
        cout<<"Enter two integers: ";
        cin>>num1>>num2;
        multiplefunc(num1,num2);
    }while(num2%num1!=0);
    return 0;
}
void multiplefunc(int n1,int n2){
    if(n2%n1==0){
        cout<<n2<<" is a multiple of "<<n1<<endl;
        cout<<endl;
    }else{
        cout<<n2<<" is not a multiple of "<<n1<<endl;
        cout<<endl;
        
    }
}

