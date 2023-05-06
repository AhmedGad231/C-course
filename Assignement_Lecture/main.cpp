#include <iostream>  
using namespace std;
int Recursive_Summation(int arr[],size_t size,size_t n);
int Recursive_Maximum(int arr[],size_t size);
int main(){
    int max;
    int size{0};
    cout<<"Enter The Size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i{0};i<size;i++){
        cin>>arr[i];
    }
    cout <<"The Summation of Array: "<<Recursive_Summation(arr,size,0)<< endl;  // 0 is the index of array
    max=Recursive_Maximum(arr,size);
    cout <<"The Max of Array: "<<max<< endl;  
    return 0;
}
int Recursive_Summation(int arr[],size_t size,size_t n){
    int sum{0};
    sum=arr[n];
    if(n<size){
        return sum+Recursive_Summation(arr,size,n+1);
    }
 else{ 
     return 0;
 
     }
}
int Recursive_Maximum(int arr[],size_t size){
   static int i{0},max{-9999};
   if(i<size){
       if(max<*(arr+i)){
           max=*(arr+i);    
       }
       i++;
       return Recursive_Maximum(arr,size);
   }
   return max;
}


