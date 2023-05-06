#include <iostream>  
using namespace std;
double celsuis_to_fahrenheit(double);
int main(){
    double Temp{0},Temp_in_fahrenheit{0};
    cout<<"Enter The Temprature in Celsuis please: ";
    cin>>Temp;
    Temp_in_fahrenheit=celsuis_to_fahrenheit(Temp);
    cout<<"The temprature in celsuis is: "<<Temp<<" C equal to "<<Temp_in_fahrenheit<<" F in fahrenheit"<<endl;
    return 0;
}
double celsuis_to_fahrenheit(double temp){
    double temp_in_fahrenheit{0};
    temp_in_fahrenheit=(temp*9.0/5.0)+32;
    return temp_in_fahrenheit;
}
