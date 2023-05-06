#include <iostream>  
#include <vector>
#include <string>
using namespace std;
void print(int);
void print(double);
void print(string);
void print(vector<string>);
void print(string,string);

int main(){
    vector<string> v {"Aba7","is","the","best","player","in","the","world"};
    print(50);
    print(10.2);
    print('f');
    print(10.3F);
    print("Aba7");
    print(v);
    print("mohamed","sabry");
    return 0;
}
void print(int num){
    cout<<"the integer is: "<<num<<endl;
}
void print(double num){
    cout<<"the double is: "<<num<<endl;

}
void print(string s){
 cout<<"the string is: "<<s<<endl;   
}
void print(vector<string>v){
    cout<<"the vector of strings are: ";
    for(auto s:v){
        cout<<s +" ";
    }cout<<endl;
}
void print(string s,string t){
    cout<<"the two strings are: "<<s<<" "<<t<<endl;
}
