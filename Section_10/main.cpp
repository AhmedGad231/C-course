#include <iostream>
#include <cstring> //-->   //strcpy assignment to an string 
#include <cctype>      //strlen //getline fuction to get the full name of the string
using namespace std;   //strcat 
int main(){         //strcmp   //tolower //toupper //isalpha
    
    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];
//    cout<<"Enter your first name Please: ";
//    cin>>first_name;
//    cout<<"Enter your last name Please: ";
//    cin>>last_name;
//    cout<<"Hello "<<first_name<<" your first name has "<<strlen(first_name)<<" characters"<<endl;
//    cout<<"and your last name "<<last_name<<" has "<<strlen(last_name)<<" characters"<<endl;
//   strcpy(full_name,first_name);
//   strcat(full_name," ");
//   strcat(full_name,last_name);
//   cout<<"So your full name is "<<full_name<<" and it has "<<strlen(full_name)<<" string length"<<endl;
//cout<<"============================================================="<<endl;
//cout<<"Enter your full name: ";
//cin>>full_name;
//cout<<"your full name is "<<full_name<<endl;
cout<<"============================================================="<<endl;
cout<<"Enter your full name: ";
cin.getline(full_name,50);
cout<<full_name<<endl;
cout<<"============================================================="<<endl;
strcpy(temp,full_name);
if(strcmp(temp,full_name)==0){
    cout<<temp<<" and "<<full_name<<" are the same name"<<endl;
}else{
    cout<<temp<<" and "<<full_name<<" are not the same name"<<endl;

}cout<<"============================================================="<<endl;
for(size_t i{0};i<strlen(full_name);++i){
    if(isalpha(full_name[i])){
        full_name[i] = toupper(full_name[i]);
    }
}cout<<"your full name in upper case: "<<full_name<<endl;

cout<<"============================================================="<<endl;
for(size_t i{0};i<strlen(full_name);++i){
    if(isalpha(full_name[i])){
        full_name[i] =tolower(full_name[i]);
    }
}
cout<<"your full name in lower case: "<<full_name<<endl;
cout<<"============================================================="<<endl;
 if(strcmp(temp,full_name)==0){
    cout<<temp<<" and "<<full_name<<" are the same"<<endl;

}else{
    cout<<temp<<" and "<<full_name<<" are different"<<endl;

}cout<<"============================================================="<<endl;
cout<<"Resulting of comparison "<<temp<<" and "<< full_name<<": "<<strcmp(temp,full_name)<<endl;
cout<<"Resulting of comparison "<<full_name<<" and "<< temp<<": "<<strcmp(full_name,temp)<<endl;

    return 0;
}