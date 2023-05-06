#include <iostream>  
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
   double pi{0};
   cout<<setprecision(12);
   for(int i=0; i<1000; i++)
   {
       pi = pi + 4 * pow(-1,i) / (2*i+1); 
       if(i%100==0){
           cout<<"Estimantion of pi of  value "<<i<<" terms is: "<<pi<<endl;
       }
   }

    
}
