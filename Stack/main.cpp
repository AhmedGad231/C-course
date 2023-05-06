//#include <iostream>  
//using namespace std;
//class stack{
//private:
// char data [15];
// int top;
//public:
//stack();
//bool isempty();
//bool  isfull();
//void push(char word);
//char pop();
//char TOP();  
//void display();
//};
//stack::stack(){
//    top=-1;
//}
//bool stack::isempty(){
//    return top==-1;
//}
//bool stack::isfull(){
//    return top==15-1;
//}
//void stack::push(char word){
//    if(isfull()){
//        cout<<"it is full"<<endl;
//    }else{
//        top++;
//        data[top]=word;
//    }
//}
//char stack::pop(){
//    if(isempty()){
//        cout<<"it is empty"<<endl;
//    }else{
//    return (data[top--]);
//    }
//}
//char stack::TOP(){
//    if(isempty()){
//        cout<<"it is empty"<<endl;
//        return -1;
//    }else{
//    return data[top];
//    }
//}
//void stack::display(){
//    for(int i=top;i>=0;i--){
//        cout<<data[i];
//    }
//}
//int main(){
//    cout <<"Enter a word /""happy/"<<endl;
//      char arr[5];
//      for(int i=0; i<5;i++){
//          cin>>arr[i];
//      }
//      stack obj;
//      for(int i=0;i<5;i++){
//      obj.push(arr[i]);
//      }
//      obj.display();
//    return 0;
//}

//dynamic stack
#include <iostream>  
using namespace std;
class stack{
private:
int size =15;
 char *data =new char[size];
 int top;
public:
stack();
~stack();
bool isempty();
bool  isfull();
void push(char word);
char pop();
char TOP();  
void display();
void resize();
};
stack::stack(){
    top=-1;
}
stack::~stack(){
    delete[]data;
}
bool stack::isempty(){
    return top==-1;
}
bool stack::isfull(){
  return top==size-1;
}
void stack::push(char word){
    if(isfull()){
        resize();
    }else{
        top++;
        data[top]=word;
    }
}
char stack::pop(){
    if(isempty()){
        cout<<"it is empty"<<endl;
    }else{
    return (data[top--]);
    }
}
char stack::TOP(){
    if(isempty()){
        cout<<"it is empty"<<endl;
        return -1;
    }else{
    return data[top];
    }
}
void stack::display(){
    for(int i=top;i>=0;i--){
        cout<<data[i];
    }
}
void stack::resize(){
    char *spare=new char[size+10];
    for(int i=0;i<size;i++){
        spare[i]=data[i];
    }
    size=size+10;
    delete[]data;
    data=spare;
}
int main(){
    cout <<"Enter a word /""happy/"<<endl;
      char arr[5];
      for(int i=0; i<5;i++){
          cin>>arr[i];
      }
      stack obj;
      for(int i=0;i<5;i++){
      obj.push(arr[i]);
      }
      obj.display();
    return 0;
}
