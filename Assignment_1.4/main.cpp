#include <iostream>  
#include <vector>
using namespace std;
int main(){
    int *ptr;
    vector<int>data_set(5,0);
    cout<<"Enter 5 numbers please: ";
for(size_t j{0};j<data_set.size();j++){
        cin>>data_set.at(j);
    }cout<<"The numbers you entered are: { ";
for(size_t i{0};i<data_set.size();i++){
    cout<<data_set.at(i)<<" ";
}cout<<"}"<<endl;
if(data_set.at(0)>=data_set.at(1)&&data_set.at(0)>=data_set.at(2)&&data_set.at(0)>=data_set.at(3)&&data_set.at(0)>=data_set.at(4)){
    ptr=&data_set.at(0);
    cout<<"the max value is: "<<*ptr<<endl;
}else if(data_set.at(1)>=data_set.at(0)&&data_set.at(1)>=data_set.at(2)&&data_set.at(1)>=data_set.at(3)&&data_set.at(1)>=data_set.at(4)){
     ptr=&data_set.at(1);
    cout<<"the max value is: "<<*ptr<<endl;
}else if(data_set.at(2)>=data_set.at(0)&&data_set.at(2)>=data_set.at(1)&&data_set.at(2)>=data_set.at(3)&&data_set.at(2)>=data_set.at(4)){
    ptr=&data_set.at(2);
    cout<<"the max value is: "<<*ptr<<endl;
}else if(data_set.at(3)>=data_set.at(0)&&data_set.at(3)>=data_set.at(1)&&data_set.at(3)>=data_set.at(2)&&data_set.at(3)>=data_set.at(4)){
    ptr=&data_set.at(3);
    cout<<"the max value is: "<<*ptr<<endl;
}else{
    ptr=&data_set.at(4);
    cout<<"the max value is: "<<*ptr<<endl;
}
    return 0;
}
