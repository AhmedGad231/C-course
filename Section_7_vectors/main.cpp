#include <iostream>
#include <vector>
using namespace std;
int main(){
 //vector<int>ana3ayzanam{100,70,88,10};// we can declare and initialize with the constructor parenthess()
 vector<int>ana3ayzanam(10,100); //this mean that we have 10 element have value of 100
 cout<<ana3ayzanam.at(0)<<endl;
 cout<<ana3ayzanam.at(1)<<endl;
 cout<<ana3ayzanam.at(2)<<endl;
 cout<<ana3ayzanam.at(3)<<endl;
 cout<<"the size of the vector "<<ana3ayzanam.size()<<endl;
 cout<<"====================================================================="<<endl;
 cout<<"enter new values for the elements"<<endl;
 cin>>ana3ayzanam.at(0);
 cin>>ana3ayzanam.at(1);
 cin>>ana3ayzanam.at(2);
 cin>>ana3ayzanam.at(3);
 cout<<"the new elements"<<endl;
 cout<<ana3ayzanam.at(0)<<endl;
 cout<<ana3ayzanam.at(1)<<endl;
 cout<<ana3ayzanam.at(2)<<endl;
 cout<<ana3ayzanam.at(3)<<endl;
 cout<<"the size of the vector "<<ana3ayzanam.size()<<endl;
 cout<<"====================================================================="<<endl;
 cout<<"the new elements after acessing them with assignment operator"<<endl;
 ana3ayzanam.at(0)=25;
 ana3ayzanam.at(1)=789;
 ana3ayzanam.at(2)=85;
 ana3ayzanam.at(3)=19;
 cout<<ana3ayzanam.at(0)<<endl;
 cout<<ana3ayzanam.at(1)<<endl;
 cout<<ana3ayzanam.at(2)<<endl;
 cout<<ana3ayzanam.at(3)<<endl;
 cout<<"the size of the vector "<<ana3ayzanam.size()<<endl;
 cout<<"====================================================================="<<endl;

 // NOW vectors are dynamic array we can add or remove elements and change the size of the vector right?
 // so we have a method to add elements and increase the size of the variable 
 // this method called push_back method  we enter the vecrorname then the dot and push_back statment and 
 //constructor parenthess (the number you want to add)and finally the ;   LET'S DO THIS 
// ana3ayzanam.push_back(15); // we add 15 to the vector 
// cout<<ana3ayzanam.at(4)<<endl;
// ana3ayzanam.push_back(5);
// cout<<ana3ayzanam.at(5)<<endl;
 //cout<<"the size of the vector "<<ana3ayzanam.size()<<endl;
    return 0;
}
