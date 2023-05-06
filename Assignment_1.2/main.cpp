#include <iostream>
using namespace std;
void sum_average_array();
double sum_array(double,double,double);
double averag_array(double,double,double);

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
    cout<<"The sum of the numbers you entered is: "<<sum_array(arr[0],arr[1],arr[2])<<endl;
    cout<<"The average of the numbers you entered is: "<<averag_array(arr[0],arr[1],arr[2])<<endl;
}
double sum_array(double n1,double n2,double n3){
    return (n1+n2+n3);
}
double averag_array(double n1,double n2,double n3){
    return(sum_array(n1,n2,n3)/3);
}