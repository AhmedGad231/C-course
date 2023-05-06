#include <iostream>  


using std::cout;
using std::cin;
using std::endl;


int main(){
   const int estimate_value{30};
   const double small_room{25};
   const double large_room{35};
   const double taxes{0.06};
   double smallRoomsNum,BigRoomsNum,Cost,Tax,Total;
   cout<<"Welcome to Aba7's Company For Cleaning Services"<<endl;
   cout<<endl;
   cout<<"how many small rooms you would be cleaned: ";
   cin>>smallRoomsNum;
   cout<<"how many large rooms you would be cleaned: ";
   cin>>BigRoomsNum; cout<<endl;
   cout<<"Estimate Value & Prices"<<endl;
   cout<<"the Number of small rooms: "<<smallRoomsNum<<endl;
   cout<<"The Number of large Rooms: "<<BigRoomsNum<<endl;
   cout<<"Price of the small room: $"<<small_room<<endl;
   cout<<"Price of the large room: $"<<large_room<<endl;
   Cost = (smallRoomsNum*small_room)+(BigRoomsNum*large_room);
   cout<<"The Cost: $"<<Cost<<endl;
   Tax = Cost*taxes;
   cout<<"the Taxes: $"<<Tax<<endl;
   cout<<"************************************"<<endl;
   Total=Cost+Tax;
   cout<<"The Total: $"<<Total<<endl;
   cout<<"The Estimate Is Valid for " <<estimate_value<<" days"<<endl;
    return 0;
}
 
