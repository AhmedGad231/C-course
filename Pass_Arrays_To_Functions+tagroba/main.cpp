#include <iostream>
using namespace std;
void sum_average_array();
double sum_array(double arr[], size_t size);
double averag_array(double arr[]);

int main(){
    sum_average_array();
    return 0;
}
void sum_average_array(){
    double arr[3];
    cout<<"Enter 3 numbers please: ";
    for(size_t i{0};i<3;i++){
        cin>>arr[i];
    }cout<<"The numbers you entered are: ";
    for(auto arr2:arr){
        cout<<arr2<<" ";
    }cout<<endl;
    cout<<"The sum of the numbers you entered is: "<<sum_array(arr,3)<<endl;
    cout<<"The average of the numbers you entered is: "<<averag_array(arr)<<endl;
}
double sum_array(double arr[],size_t size){
    int sum{0};
    for(size_t i{0};i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
double averag_array(double arr[]){
    return(sum_array(arr,3)/3);
}