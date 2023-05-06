#include <iostream>  
using namespace std;
int factorial(int n);
double ncr(int n,int r);
int main(){
int n{0},r{0};
double ncdr{0};
cout<<"Enter n and r please: ";
cin>>n>>r;
ncdr= ncr(n,r);
cout<<"The Result of the compiantion function is: "<<ncdr;  
    return 0;
}
int factorial(int n){
//  int s=1;
//   for(int i=n;i>0;i--){            //الطريقه دي لو هنادي علي الفانكشن دي من جوه فانكشن مش من الماين علي طول 
//       s*=i;                          // for loop
  // }
   //return s;                                                    
                                                         if(n==0){
                                                        return 1;                  //recursion
                                                   }else{
                                                      return n*factorial(n-1);
                                                 }
                                            // الطريقه دي لو كنت هستخدم الفاكتوريبال فانكشن في الماين واعمل الضرب والقسمه علي طول من الماين 
}
double ncr(int n,int r){
return factorial(n)/(factorial(r)*factorial(n-r));    
}
