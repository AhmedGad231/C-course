#include <iostream>  
using namespace std;
int main(){
  const  int robot{10};
    double num{};
    cout<<"Please Enter a number: "<<endl;
    cin>>num;
    if(num>=robot){
        if(num>robot){
        cout<<num<<" is greater than "<<robot<<" "<<endl;
        }else{
            cout<<num<<" is equal to "<<robot<<" "<<endl;
            
        }
    }else{
        cout<<num<<" is less than "<<robot<<" "<<endl;
    }
    return 0;
}
