#include <iostream>  
using namespace std;
int main(){
    enum color{
     red,blue,green,yellow,orange,white,black,purple,pink,grey,brown             };
    
     color fav_color{yellow};
     
     switch(fav_color){
         case yellow: cout<<"the color is yellow"<<endl;
         break;
         default:cout<<"ok"<<endl;
     }
    return 0;
}
