#include <iostream>  
using namespace std;
int main(){
   //int *int_ptr{nullptr};
  // int_ptr=new int{100};
 //  cout<<int_ptr<<endl;
  // cout<<*int_ptr<<endl;
//cout<<*int_ptr<<endl;
//delete int_ptr;
   ///////////////////////////////////////
   //cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
   //////////////////////////////////////
   size_t size{0};
   double *temp_ptr{nullptr};
   cout<<"How many temps you want: ";
   cin>>size;
   temp_ptr=new double[size];
   cout<<"Enter "<<size<<" temps please: "<<endl;
 for(size_t i{0},j{1};i<size;i++,j++){
     cout<<"Enter the temp number "<<j<<" please :";
     cin>>*(temp_ptr+i); //temp_ptr[i]
 }cout<<endl;
 cout<<"The temps from the heap with the dynamic array with new and delete with pointers are: "<<endl;
 cout<<"{";
 for(size_t i{0};i<size;i++){
     if(i==size-1){
         cout<<*(temp_ptr+i);
     }else{
         cout<<*(temp_ptr+i)<<",";  // or can we say ptr[i] it will work if we use it like this
     }
 }cout<<"}"<<endl;

  size_t new_size{0};
  cout<<"Enter the new size bigger of the dynamic array please: ";
  cin>>new_size;
  double *temps_ptr=new double[new_size];
 for(size_t i{0};i<size;i++){
     *(temps_ptr+i)=*(temp_ptr+i);  //temps_ptr=temp_ptr[i] 
 }
 delete []temp_ptr;
 temp_ptr=temps_ptr;
 
    cout<<"Enter "<<new_size-size<<" temps please: "<<endl;
 for(size_t i{size},j{size+1};i<new_size;i++,j++){
     cout<<"Enter the temp number "<<j<<" please :";
     cin>>*(temp_ptr+i); //temp_ptr[i]
 }
 cout<<endl;
 cout<<"The temps from the heap with the dynamic array with new and delete with pointers are: "<<endl;
 cout<<"{";
 for(size_t i{0};i<new_size;i++){
     if(i==new_size-1){
         cout<<*(temp_ptr+i);
     }else{
         cout<<*(temp_ptr+i)<<","; // or can we say ptr[i] it will work if we use it like this 
     }
 }cout<<"}"<<endl;
 delete []temp_ptr;
 delete []temps_ptr;
    return 0;
}
