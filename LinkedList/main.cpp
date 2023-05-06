#include <iostream>  
using namespace std;
class node{
public:
    int data;
    node *next;
};
class list{
private:
    node *head;
public:
    list(){
        head=nullptr;
    }
    ~list();
  bool isEmpty(){return head==nullptr;}
  void insertFirst(int x);
  void  insertlast(int x);
  void insetafterfirst(int x);
  int FindNode(int x);
  void deletefirst();
  void deletelast();
  void deleteAfterFirst();
  void displaylist();
  void releaseall();
 
};
void list::insertFirst(int x){
    node *b = new node ;
    b-> data = x;
    b-> next = nullptr;
    if(isEmpty()){
        head = b;
    }else{
        b->next=head;
        head=b;
    }
}
void list::insertlast(int x){
    node *b = new node ;
    b->data=x;
    b->next= nullptr;
    if(isEmpty()){
        head=b;
    }else{
        node *current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next= b;
    }
}
void list::insetafterfirst(int x){
    node *b=new node;
    b->data=x;
    b->next=nullptr;
    if(isEmpty()){
        head=b;
    }else{
        b->next=head->next;
        head->next=b;
    }
}
void list::deletefirst(){
    if(isEmpty()){
        cout<<"empty"<<endl;
    }else{
        node *b;
        b=head;
        head=head->next;
        delete b;
    }
}
void list::deletelast(){
    if(isEmpty()){
        cout<<"empty"<<endl;
        if(head->next==nullptr){
            deletefirst();
    }
    }else{
        node *b,*p;
        b=p=head;
        while(b->next !=nullptr){
            p=b;
            b=b->next;
        }
        p->next=nullptr;
        delete b;
    }
}
void list::deleteAfterFirst(){
    node*b=head->next;
    head->next=b->next;
    delete b;
}
int list::FindNode(int x){
    node *currnode=head;
    int currindex = 1;
    while (currnode !=nullptr && currnode->data !=x){
        currnode=currnode->next;
        currindex++;   
    }
    if (currnode !=nullptr) return currindex;
    else
        return 0;
}
void list::displaylist(){
    if(isEmpty()){
        cout<<"empty"<<endl;
    }
    node *b=head;
    int num=0;
    while(b !=nullptr){
        cout<<b->data<<" ";
        b=b->next;
        num++;
    }
    cout<<endl;
    cout<<"the number of nodes in the list "<<num<<endl;
}
list::~list(){
    node* currnode=head, *nextnode=nullptr;
    while (currnode !=nullptr){
        nextnode=currnode->next;
        delete currnode;
        currnode = nextnode;
    }
}
void list::releaseall(){
     node *currnode=head;
    while (currnode !=nullptr){
        head=head->next;
        delete currnode;
        currnode = head;
}
}
int main(){
 list obj1;
 obj1.insertFirst(5);
 obj1.insertFirst(2);   
 obj1.insertFirst(3);   
 obj1.insertFirst(21);   
 obj1.insertFirst(11);   
 obj1.insertFirst(42);
 obj1.insetafterfirst(77);
 obj1.insertlast(8);
 obj1.deletefirst();
 obj1.deleteAfterFirst();
 obj1.deletelast();
 //cout<<obj1.FindNode()<<endl;
 obj1.releaseall();
 obj1.displaylist();   

    return 0;
}
