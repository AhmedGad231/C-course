#include <iostream>  
#include <vector>;
using namespace std;
int main(){
    vector<vector<int>>anahamootwanam {
      {120,100,80,60},
      {40,20,0,-20},
      {-40,-60,-80,200}
    };
    cout<<"the elements of the 2D vector is :"<<endl;
    cout<<anahamootwanam.at(0).at(0)<<endl;
    cout<<anahamootwanam.at(0).at(1)<<endl;
    cout<<anahamootwanam.at(0).at(2)<<endl;
    cout<<anahamootwanam.at(0).at(3)<<endl;
    cout<<anahamootwanam.at(1).at(0)<<endl;
    cout<<anahamootwanam.at(1).at(1)<<endl;
    cout<<anahamootwanam.at(1).at(2)<<endl;
    cout<<anahamootwanam.at(1).at(3)<<endl;
    cout<<anahamootwanam.at(2).at(0)<<endl;
    cout<<anahamootwanam.at(2).at(1)<<endl;
    cout<<anahamootwanam.at(2).at(2)<<endl;
    cout<<anahamootwanam.at(2).at(3)<<endl;
    return 0;
}
