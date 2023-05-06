#include <iostream> 
#include <string> 
#include <vector>
using namespace std;
// assignment one Ahmed Mohamed Youssef Gad Elmola 212101727


int main() {
   char str[] = "A string.";
   char *pc = str;

   cout<< *pc <<endl;
   
   cout <<*(pc+3)<<endl;
   cout<< *pc <<endl;

//   // // // / // / / / / / / / // /  // / / / // / /  / // / / / // / / / /
//   string name {"Ahmed"};
//   string *ptr=&name;
//   cout<<*ptr<<endl;
//vector<string> stooges{"Ahmed","Mohamed","Youssef","Gad","Elmola"};
//vector<string> *vector_ptr{nullptr};
//vector_ptr=&stooges;
//cout<<"First stooge is: "<<(*vector_ptr).at(0)<<endl; //Ahmed
//cout<<"Second stooge is: "<<(*vector_ptr).at(1)<<endl;
//for(auto v:*vector_ptr){
//    cout<<v<<" ";
//}cout<<endl;

   return 0;
}

