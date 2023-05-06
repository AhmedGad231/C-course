#include <iostream>  
using namespace std;
int main(){
   int n{0};
   cout<<"Enter an input: ";
   cin>>n;
   int *ptr{nullptr};
   ptr=&n;
   cout<<"The Number You Entered is: "<<*ptr<<endl;
    return 0;
}
