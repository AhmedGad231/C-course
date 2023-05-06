#include <iostream>  
using namespace std;
class queue{
  private:
int size;
int *data;
int front,rear;
public:
queue(int sz);
~queue();
void enqueue(int value);
void dequeue();
bool isempty();
int peek();
void display();
void resize();
bool isfull();  
};
queue::queue(int sz){
    size=sz;
    data=new int[size];
    front=rear=-1;
}
queue::~queue(){
    delete [] data;
}
bool queue::isempty(){
    return (front==-1&&rear==-1);
}
bool queue::isfull(){
    return (rear==size-1);
}
void queue::enqueue(int value){
    if(isfull()){
        resize();
    }if(front==-1&&rear==-1){
        front++;
        rear++;
        data[rear]=value;
    }else if(front>-1){
        ++rear;
        data[rear]=value;
    }
    
}
void queue::dequeue(){
    if(isempty()){
        cout<<"the queue is empty"<<endl;
    }else{
        if(front>=rear){
            front=rear=-1;
        }else{
            front++;
        }
    }
}
int queue::peek(){
    if(isempty()){
        cout<<"it is empty"<<endl;
    }else
    return data[front];
}
void queue::display(){
    if(isempty()){
        cout<<"empty"<<endl;
    }else{
        cout<<"Items: ";
        for(int i=front;i<=rear;i++){
            cout<<data[i]<<"    ";
        }cout<<endl;
    }
}
void queue::resize(){
    int *spare=new int[size+10];
    for(int i=0;i<size;i++){
        spare[i]=data[i];
    }
    size=size+10;
    delete[]data;
    data=spare;
}
int main(){
    queue obj(8);
    obj.enqueue(7);
        obj.enqueue(4);
            obj.enqueue(2);
    obj.enqueue(1);
    obj.enqueue(4);
    obj.enqueue(5);
    obj.display();
    obj.dequeue();
        obj.dequeue();
    obj.dequeue();
    obj.display();
cout<<obj.peek()<<endl;
    obj.display();



    return 0;
}
