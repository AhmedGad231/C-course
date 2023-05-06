#include <iostream> 
#include <cmath> 
using namespace std;

const double pi{3.14159265};

double calc_area(double raduis){
    return (4*pi*pow(raduis,2));
}
double calc_volume(double raduis){
    return(0.75*pi*pow(raduis,3));
}
void area(double raduis){
    
    cout<<"the area of the raduis you entered "<<raduis<<" is "<<calc_area(raduis)<<endl;
    
}
void volume(double raduis){
    cout<<"The Volume of the sphere by the raduis you entered "<<raduis<<" is "<<calc_volume(raduis)<<endl;
}



int main(){
    double raduis{};
    cout<<"Enter the raduis of the sphere: "<<endl;
    cin>>raduis;
     area(raduis);
     volume(raduis);
    return 0;
}

      
   
  

   
    
    
