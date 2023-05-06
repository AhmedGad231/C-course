#include <iostream>  
using namespace std;
int*dyn_array(size_t size,int initial_value=0);
void display(const int *const my_array,size_t size);
int main(){
    size_t size{0};
    int initial_value{0};
    int *my_array{nullptr};
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Enter the initial value for the array: ";
    cin>>initial_value;
    my_array=dyn_array(size,initial_value);
    cout<<"============================"<<endl;
    display(my_array,size);
    delete [] my_array;
    return 0;
}
int*dyn_array(size_t size, int inclTabCtrlitial_value){
    int *new_array_ptr=new int[size];
    for(size_t i{0};i<size;i++){
        *(new_array_ptr+i)=initial_value;
    }
return new_array_ptr;
}
void display(const int *const my_array,size_t size){
    for(size_t i{0};i<size;i++){
        cout<<*(my_array+i)<<" ";
    }cout<<endl;
}

