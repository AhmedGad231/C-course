#include <iostream> 
#include <vector>
#include <string> 
using namespace std;
int main(){
   vector<string> stooges{"Ahmed","Mohamed","Gad"};
   for(auto str:stooges){
       str="Funny";
       cout<<str<<endl;
   }cout<<endl;
   for(auto str:stooges){
       cout<<str<<endl;
   }cout<<endl;
   for(auto &str:stooges){
       str="Funny";
   }
   for(auto const &str:stooges){
       cout<<str<<endl;
   }cout<<"==========================="<<endl;
   int x{5};
   int *ptr{&x};
   int &s{*ptr};
   cout<<s<<endl;
   s=7;
   cout<<x<<endl;
   cout<<*ptr<<endl;
   cout<<s<<endl;
   cout<<&x<<endl;
   cout<<ptr<<endl;
   cout<<&s<<endl;
    return 0;
}
