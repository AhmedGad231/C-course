#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int>vector1;
   vector<int>vector2;
   int addingvector;
   addingvector=10;
   vector1.push_back(addingvector);
   addingvector=20;
   vector1.push_back(addingvector);
   cout<<"Elments of vector1: "<<endl;
   cout<< vector1.at(0)<<endl;
   cout<< vector1.at(1)<<endl;
   cout<< "The Size Of Vector1: "<<vector1.size()<<endl;
   addingvector=100;
   vector2.push_back(addingvector);
   addingvector=200;
   vector2.push_back(addingvector);
   cout<<"Elments of vector2: "<<endl;
   cout<< vector2.at(0)<<endl;
   cout<< vector2.at(1)<<endl;
   cout<< "The Size Of Vector2: "<<vector2.size()<<endl;
   vector<vector<int>>vector_2d;
   vector_2d.push_back(vector1);
   vector_2d.push_back(vector2);
   cout<<"Elments of vector_2d: "<<endl;
   cout<< vector_2d.at(0).at(0)<<endl;
   cout<< vector_2d.at(0).at(1)<<endl;
   cout<< vector_2d.at(1).at(0)<<endl;
   cout<< vector_2d.at(1).at(1)<<endl;
   cout<< "The Size Of Vector_2d: "<<vector_2d.size()<<endl;
    vector1.at(0)=1000;
    
    cout<<"The Updated Elments of vector_2d "<<endl;
   cout<< vector_2d.at(0).at(0)<<endl;
   cout<< vector_2d.at(0).at(1)<<endl;
   cout<< vector_2d.at(1).at(0)<<endl;
   cout<< vector_2d.at(1).at(1)<<endl;
   cout<< "The New Size Of Vector_2d = "<<vector_2d.size()<<endl;
   cout<<"The Updated Elments of vector1 "<<endl;
   cout<< vector1.at(0)<<endl;
   cout<< vector1.at(1)<<endl;
   cout<< "The New Size Of Vector1 = "<<vector1.size()<<endl;
   
    return 0;
}

