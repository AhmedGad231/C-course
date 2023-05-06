#include <iostream>  
using namespace std;
int main(){
    int x{2};
    int u{4};
    int const *ptr=&x;
    int *const ptr2=&x;
    ptr=&u;
    *ptr2=8;
    cout<<*ptr<<endl;
    cout<<*ptr2<<endl;
    
    return 0;
}
