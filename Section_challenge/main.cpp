//#include <iostream>  
//using namespace std;
//class Vehicle{
  //public:
    //Vehicle(){cout<<"A";}
    //Vehicle(int i) {cout<<"21";}  
//};
//class fourwheleer : public Vehicle{
  //public:
    //fourwheleer(int i) {cout<<"43";}
    //fourwheleer() {cout<<"b";}
//
//};
//class Car : public fourwheleer{
  //public:
    //Car() {cout<<"7";}
    //Car(int i) {cout<<"65";}
//};
//int main(){
  //  Car obj('a');
    //return 0;
//}
///////////////////////////////Section Challenge of pointers/////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

void print(int const* array,size_t size);
int *apply_all(int array1[],size_t array1_size,int array2[], size_t array2_size);

int main(){
    const size_t array1_size{5};
    const size_t array2_size{3};
    
    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};
    
    cout<<"Array1: ";
    print(array1,array1_size);
    
    cout<<endl;
    
    cout<<"Array2: ";
    print(array2,array2_size);
    
    int*result=apply_all(array1,array1_size,array2,array2_size);
    constexpr size_t result_size{array1_size*array2_size};
    
    cout<<endl;
    
    cout<<"Result: ";
    print(result,result_size);
    return 0;
}
void print(int const* array,size_t size){
    for(size_t i{0};i<size;i++){
        cout<<*(array+i)<<" ";
    }
}
int *apply_all(int array1[],size_t array1_size,int array2[], size_t array2_size){
    int *new_ptr{nullptr};
    int new_size{0};
    new_size=array1_size*array2_size;
    new_ptr= new int[new_size];
    for(size_t i{0},k{0};i<array2_size;i++){
        for(size_t j{0};j<array1_size;j++){
            new_ptr[k]=(array2[i]*array1[j]);
            k++;
        }
    }
    
    
    
    return new_ptr;
}

