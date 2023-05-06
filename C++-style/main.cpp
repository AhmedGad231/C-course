#include <iostream>  
#include <string>
using namespace std;
int main(){
//    string s0;
//    string s1 {"ahmed"}; 
//    string s2 {s1}; 
//    string s3 {"ahmed",3}; 
//    string s4 {s2,0,2}; 
//    string s5 {"ahmed",4}; 
//    string s6 (2,'w'); 
//    s0="Mohamed";
//    s1=s0;
//    cout<<s0<<endl;
//    cout<<s1<<endl;
//    cout<<s2<<endl;
//    cout<<s3<<endl;
//    cout<<s4<<endl;
//    cout<<s5<<endl;
//    cout<<s6<<endl;
string first_name{};
string last_name{};
string full_name{};
cout<<"please enter your first name: "<<endl;
cin>>first_name;
cout<<"please enter your last name: "<<endl;
cin>>last_name;
cout<<"your first name is: "<<first_name<<" and it has "<<first_name.length()<<" characters"<<" and your last name is: "<<last_name<<" and it has "<<last_name.length()<<" characters"<<endl;
full_name=first_name+" "+last_name;
cout<<"so your full name is: "<<full_name<<endl;
for(size_t i{0};i<full_name.length();++i){
    cout<<full_name.at(i);
}cout<<endl;
cout<<full_name.substr(0,4)<<endl; //The first number is the start index of the string 
cout<<full_name.substr(6,4)<<endl; // The second number is the number of letters you want to substracting or erase or whatever you want
cout<<full_name.erase(0,6)<<endl;
cout<<full_name.at(5)<<endl;

    return 0;
}
