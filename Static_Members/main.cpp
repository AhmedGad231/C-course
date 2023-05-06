#include <iostream>  
using namespace std;
class Box{
public:
    static int object_count;
    Box(double l=2.0,double b=2.0,double h=2.0){
        cout<<"Constructor called."<<endl;
        length=l;
        breadth=b;
        height=h;
        object_count++;
    }
    double Volume(){
        return length*breadth*height;
    }
    private:
    double length;
    double breadth;
    double height;
};
int Box::object_count=0;
int main(){
    Box Box1(3.3,1.2,1.5);
    Box Box2(8.5,6.0,2.0);
//    Box1.object_count=5;
//    Box2.object_count=155;
    cout<<"Total Objects: "<<Box::object_count<<endl;
    cout<<"Total Objects: "<<Box1.object_count<<endl;
    cout<<"Total Objects: "<<Box2.object_count<<endl;
    
    return 0;
}
