#include <iostream>  
using std::cout;
using std::cin;
using std::endl;
int main(){
    cout<<"Enter the width of the room: ";
    double room_width{0};
    cin>>room_width;
    cout<<"Enter the length of the room: ";
    double room_length{0};
    cin>>room_length;
    cout<<"The area of the room = "<<room_length*room_width<<endl;
    return 0;
}
