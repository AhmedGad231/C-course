#include <iostream> 
#include <climits> // we use this library to know the max and minimum integeral types and variables numbers

//#include <cfloat> we use this library when we need to know  max adn minimum floating point numbers and variables 

using std::cout;
using std::cin;
using std::endl;
int main(){
 cout<<"int: "<<sizeof(int)<<" bytes"<<endl;
 cout<<"unsigned int: "<<sizeof(unsigned int)<<" bytes"<<endl;
 cout<<"long: "<<sizeof(long)<<" bytes"<<endl;
 cout<<"short: "<<sizeof(short)<<" bytes"<<endl;
 cout<<"long long: "<<sizeof(long long)<<" bytes"<<endl;
 cout<<"char: "<<sizeof(char)<<" bytes"<<endl;
 cout<<"char16_t: "<<sizeof(char16_t)<<" bytes"<<endl;   
 cout<<"================================================================="<<endl;
 cout<<"float: "<<sizeof(float)<<" bytes"<<endl;
 cout<<"double: "<<sizeof(double)<<" bytes"<<endl;
 cout<<"long double: "<<sizeof(long double)<<" bytes"<<endl;
 cout<<"================================================================="<<endl;
 cout<<"Minimum Values"<<endl;
 cout<<"Min int: "<<INT_MIN<<endl;
 cout<<"Min short: "<<SHRT_MIN<<endl;
 cout<<"Min char: "<<CHAR_MIN<<endl;
 cout<<"Min long: "<<LONG_MIN<<endl;
 cout<<"Min long long: "<<LLONG_MIN<<endl;
 cout<<"================================================================="<<endl;
 cout<<"Max Values"<<endl;
 cout<<"Max int: "<<INT_MAX<<endl;
 cout<<"Max short: "<<SHRT_MAX<<endl;
 cout<<"Max char: "<<CHAR_MAX<<endl;
 cout<<"Max long: "<<LONG_MAX<<endl;
 cout<<"Max long long: "<<LLONG_MAX<<endl;
 cout<<"================================================================="<<endl;
 cout<<"Variables Sizes"<<endl;
 int age{54};
 cout<<"the size of age: "<<sizeof(age)<<endl; 
 double pi{3.14579};
 cout<<"the size of pi: "<<sizeof(pi)<<endl; 
 cout<<"================================================================="<<endl;
 cout<<"THANK YOU FOR YOUR EFFORT TO TRY THIS EXAMPLE HAVE A NICE DAY!"<<endl;
    return 0;
}
