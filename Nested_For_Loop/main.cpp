#include <iostream>  
using namespace std;
int main(){
 for(int i{1};i<=12;i++){
     for(int j{1};j<=12;j++){
         cout<<i<<"*"<<j<<"= "<<i*j<<endl;
     }cout<<"-------------------------"<<endl;
    } 
int rects[4][4]{
  {12,25,34,47},
  {80,91,10,11},
  {15,16,17,18},
  {22,23,24,25}
  
};                                          // azay tetba3 array 2d like a matrix 
for(int rows{0};rows<4;rows++){
   for(int colm{0};colm<4;colm++){
    cout<<rects[rows][colm]<<" ";
}cout<<endl;
}

   return 0;
}
