#include <iostream>  
using namespace std;
int Sum_Of_Digits_Of_Integer(int num1);
int main(){
    int num1{0},sum{0};
    cout<<"Enter the number you want to insert please: ";
    cin>>num1;
    sum=Sum_Of_Digits_Of_Integer(num1);
    cout<<"The number you entered is: "<<num1<<" and the sum of its digits is: "<<sum<<endl;
    return 0;
}
int Sum_Of_Digits_Of_Integer(int num1){
    int sum{0};
    while(num1!=0){
    sum+=num1%10; // here we add the last digit in the number
    num1/=10;// here we go to the next digit
}
return sum;
}

