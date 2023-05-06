#include <iostream>  
using namespace std;
int main(){
int a{1213};
int *ptr{nullptr};
int *ptr2{nullptr};   
double *ptr4{nullptr};
    cout << ptr<<endl;
    cout << &ptr<<endl;
    cout << ptr2<<endl;
    cout << &ptr2<<endl;
    cout << sizeof(ptr)<<endl;
    cout << sizeof(ptr4)<<endl;
    cout << sizeof(int)<<endl;



    return 0;
}
