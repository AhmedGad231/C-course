#include <iostream>  
using namespace std;
class CSquare;

class CRectangle{
    int width,height;
public:
//friend int main();
    int area(){
        return width*height;
    }
    void convert(CSquare sqr);
};
class CSquare{
private:
    int side;
public:
    void set_side(int a){
        side=a;
    }
friend class CRectangle;
};
void CRectangle::convert(CSquare a){
    width=a.side;
    height=a.side;
}
int main(){
    CSquare sqr;
    CRectangle rect;
    sqr.set_side(4);
    rect.convert(sqr);
    cout<<rect.area()<<endl;
  //  cout<<rect.width<<endl;
    return 0;
}
