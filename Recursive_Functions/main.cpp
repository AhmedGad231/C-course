#include <iostream>  
using namespace std;
unsigned long long factorial(unsigned long long n);
int main(){
    cout<<factorial(3);  
    return 0;
}
unsigned long long factorial(unsigned long long n){
    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
