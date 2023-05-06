#include <iostream>  
using namespace std;
class CVector{
public:
    int x,y;
    CVector(){
        x=0;
        y=0;
    }
    CVector(int,int);
CVector operator +(CVector);
CVector operator -(CVector);
CVector operator /(CVector);
CVector operator *(CVector);

};
CVector::CVector(int a,int b){
    x=a;
    y=b;
}
CVector CVector::operator +(CVector param){
    CVector temp;
    temp.x= x+ param.x;
    temp.y= y + param.y;
    return temp;
}
CVector CVector::operator -(CVector param){
     CVector temp;
    temp.x= x - param.x;
    temp.y= y - param.y;
    return temp;
}
CVector CVector::operator /(CVector param){
     CVector temp;
    temp.x= x / param.x;
    temp.y= y / param.y;
    return temp;
}
CVector CVector::operator *(CVector param){
     CVector temp;
    temp.x= x * param.x;
    temp.y= y * param.y;
    return temp;
}


int main(){
   CVector a(40,50),b(10,2),c,d,e,f;
   c=a+b;
   d=a-b;
   e=a/b;
   f=a*b;
   cout<<"C equal: "<<c.x<<" "<<c.y<<endl;
   cout<<"D equal: "<<d.x<<" "<<d.y<<endl;
   cout<<"E equal: "<<e.x<<" "<<e.y<<endl;
   cout<<"F equal: "<<f.x<<" "<<f.y<<endl;
   
    return 0;
}
