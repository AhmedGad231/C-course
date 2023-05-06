#include <iostream>  
using namespace std;
int smallest_number(int,int,int,int);
int main(){
    int n1{0},n2{0},n3{0},n4{0};
    cout<<"Enter four integers please: ";
    cin>>n1>>n2>>n3>>n4;
    cout<<"The smallest Number you have entered is: "<<smallest_number(n1,n2,n3,n4)<<endl;
    return 0;
}
int smallest_number(int a,int b,int c,int d){
    if(a<=b&&a<=c&&a<=d){
        return a;
    }
    else if(b<=a&&b<=c&&b<=d){
        return b;
    }
    else if(c<=a&&c<=b&&c<=d){
        return c;
    }
    else{
        return d;
    }
}

