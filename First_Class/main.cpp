#include <iostream>  
using namespace std;
class CRectangle{
    int x,y;
public:
    void set_values(int,int);
    int area(){
        return (x*y);
    }
};
void CRectangle::set_values(int a,int b){
    x=a;
    y=b;
}
int main(){
    CRectangle rect,rectb;
    rect.set_values(10,30);
    rectb.set_values(4,2);
    cout<<"area: "<<rect.area()<<endl;
    cout<<"area: "<<rectb.area()<<endl;
    return 0;
}