#include <iostream>  
using namespace std;
class CRectangle{
    int x,y;
    public:
  CRectangle(){
     x=4;
     y=2;
  }  
  CRectangle(int a,int b){
      x=a;
      y=b;
  }
   int area(){
       return(x*y);
   }
};
int main(){
   CRectangle rect(2,3),rectb(4,5),rectc(1,6),rectd(10,7),rectf;
   cout<<rect.area()<<endl;
   cout<<rectb.area()<<endl;
   cout<<rectc.area()<<endl;
   cout<<rectd.area()<<endl;
   cout<<rectf.area()<<endl;


    return 0;
}