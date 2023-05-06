#include <iostream>  
using namespace std;
class CRectangle{
    public:
    int*width{nullptr},*height{nullptr};
public:
    CRectangle(int,int);
    ~CRectangle();
    int area(){
        return(*width * *height);
    }
};
CRectangle::CRectangle(int a,int b){
   width=new int(a);
   height=new int(b); 
}
CRectangle::~CRectangle(){
    delete width;
    delete height;
}
int main(){
    int*addr{nullptr};
   CRectangle rect(3,4),rectb(5,6);
    addr=rect.width;
    cout<<addr<<endl;
    cout<<*addr<<endl;
    cout<<"rect area: "<<rect.area()<<endl;
    cout<<"rectb area: "<<rectb.area()<<endl;
    
    system("pause");
    cout<<"mashy"<<endl;
    return 0;
}
