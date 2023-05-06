#include <iostream>  
#include <string>
using namespace std;
int main(){
    string sentence{};
    cout<<"Enter a sentence: ";
    getline(cin,sentence);
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string encrypted_message{};
    string decrypted_message{};
    for(char c:sentence){
        size_t position = alphabet.find(c);
        if(position!=string::npos){
            char new_char{key.at(position)};
            encrypted_message+=new_char;
        }else{
            encrypted_message+=c;
        }
    }cout<<endl;
    cout<<"the Encrypted message: "<<encrypted_message<<endl;
    cout<<"the decrypted message..."<<endl;
     for(char c:encrypted_message){
        size_t position = key.find(c);
        if(position!=string::npos){
            char new_char{alphabet.at(position)};
            decrypted_message+=new_char;
        }else{
            decrypted_message+=c;
        }
     }    cout<<endl;
    cout<<"the Decrypted message: "<<decrypted_message<<endl;

    return 0;
}
