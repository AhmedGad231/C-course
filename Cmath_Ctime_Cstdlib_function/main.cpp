#include <iostream> 
#include <cmath> //de library lazm 3ashan nst5dm functions htf3na fy logic el math ze el square root w kda 
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
// double num{};
// cout<<"Enter a double: ";
// cin>>num;
// 
// cout<<"The sqrt of "<<num<<" is: "<<sqrt(num)<<endl;
// cout<<"The cubed root of "<<num<<" is: "<<cbrt(num)<<endl;
//
// cout<<"The sine of "<<num<<" is: "<<sin(num)<<endl;
// cout<<"The cosine of "<<num<<" is: "<<cos(num)<<endl;
// 
// cout<<"The ceil of "<<num<<" is: "<<ceil(num)<<endl;
// cout<<"The floor of "<<num<<" is: "<<floor(num)<<endl;
// cout<<"The round of "<<num<<" is: "<<round(num)<<endl;
//
//double power{};
//cout<<"Enter a number to power the number you entered before: ";
//cin>>power;
//cout<<"the power of "<<num<<" to "<<power<<" is: "<<pow(num,power)<<endl;

//example using rand func and time func to generate numbers and do the roll of the dice game

int random_num{};
size_t count{10};
int min{1};
int max{6};
cout<<"Rand max on my system: "<<RAND_MAX<<endl;
srand(time(nullptr)); //if you don't seed the generator you'll get the same sequence numbers every run 
for(size_t i{1};i<=count;++i){
    random_num = rand()% (max-min+1)+min; //generate a random number between min and max
    cout<<"the roll dice shown: "<<random_num<<endl;
}
    return 0;
}
