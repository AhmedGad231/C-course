#include <iostream>  
using namespace std;
class Node{
    public:
    char data;
    Node* next;
};
class Stack{
  private:
   Node* top;
  public:
  Stack();
  ~Stack();
  bool isempty();
  void push(char x);
  char Top();
  char pop();
  void display();
};
Stack::Stack(){
 top=nullptr;   
}
bool Stack::isempty(){
    return top==nullptr;
}
Stack::~Stack(){
    if(isempty()){
        cout<<"it is already empty! "<<endl;
    }else{
        Node*b=top,*nextNode=nullptr;
        while(b !=nullptr){
            nextNode=b->next;
            delete b;
            b=nextNode;
        }
    }
}
void Stack::push(char x){
    Node* b = new Node;
    b->data=x;
    b->next=nullptr;
    if(isempty()){
        top=b;
    }else{
        b->next=top;
        top=b;
    }
}
char Stack::pop(){
    if(isempty()){
        cout<<"it is empty!"<<endl;
    }else{
        char value =top->data;
        Node*b=top;
        top=b->next;
        delete b;
        return value;
        
    }
}
char Stack::Top(){
    if(isempty()){
        cout<<"it is empty!"<<endl;
        return -1;
    }else{
        return top->data;
    }
}
void Stack::display(){
    if(isempty()){
        cout<<"it is empty!"<<endl;
    }else{
        int counter=0;
        Node*b=top;
        while(b!=nullptr){
            cout<<b->data;
            b=b->next;
            ++counter;
        }cout<<endl;
    cout<<"the number of nodes = "<< counter <<endl;
    }
}
int main(){
    cout <<"Enter a word /""happy/"<<endl;
      char arr[5];
      for(int i=0; i<5;i++){
          cin>>arr[i];
      }
      Stack obj;
      for(int i=0;i<5;i++){
      obj.push(arr[i]);
      }
      obj.display();
    return 0;
}
