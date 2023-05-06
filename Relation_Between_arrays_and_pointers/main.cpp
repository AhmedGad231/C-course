#include <iostream>  
using namespace std;
int main(){
   int scores[]{100,200,300};
   int *ptr{scores};
   cout<<scores<<endl;
   cout<<ptr<<endl;
   cout<<*scores<<endl;
   cout<<*ptr<<endl;
   cout<<endl;
   cout<<scores[0]<<endl;
   cout<<scores[1]<<endl;
   cout<<scores[2]<<endl;
   cout<<endl;
   cout<<ptr[0]<<endl;
   cout<<ptr[1]<<endl;
   cout<<ptr[2]<<endl;
   cout<<*(ptr+0)<<endl;
   cout<<*(ptr+1)<<endl;
   cout<<*(ptr+2)<<endl;
   cout<<*ptr<<endl;

   cout<<endl;
   cout<<"The Test"<<endl;
   cout<<*++ptr<<endl;//200
   cout<<*ptr++<<endl;//200 //de hena ptr++ or ++ptr it's means ptr=ptr+1 this is an assignment operator
//so this gonna change the ptr in the location not like *(ptr+1)this mean operation and we output it not assignment it 
   cout<<*ptr<<endl;
   
 
    return 0;
}
