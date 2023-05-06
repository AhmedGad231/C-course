#include <iostream>  
using namespace std;
class CRectangle{
    int width,height;
public:
    void set_values (int,int);
    int area (){
        return width * height;
    }
    friend CRectangle Duplicate (CRectangle);
};
void CRectangle::set_values(int a,int b){
    width=a;
    height=b;
}
CRectangle Duplicate (CRectangle rectparam){
    CRectangle rectres;
    rectres.width=rectparam.width*2;
    rectres.height=rectparam.height*2;
    return rectres;
}
int main(){
  CRectangle rect,rectb;
  rect.set_values(2,3);
  rectb=Duplicate(rect);
  cout<<"Rect: "<<rect.area()<<endl;
  cout<<"Rectb: "<<rectb.area()<<endl;
  
    return 0;
}
