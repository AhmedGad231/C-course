#include <iostream>  
using namespace std;
int max(int arr[],int,int);
int main(){
    int size{0},max_number{0};
    cout<<"Enter the size of the array please: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array please: ";
    for(int i{0};i<size;i++){
        cin>>arr[i];
    }
    max_number=max(arr,size,0);
        cout<<"The Max number of the array is: "<<max_number<<endl;
    return 0;
}
int max(int arr[],int n,int number){
    if((n-1)<0){
    return number;
    }
    else if(arr[n-1] >number){
        number=arr[n-1];
    }
        return max(arr,--n,number);clTabCtrl

}
