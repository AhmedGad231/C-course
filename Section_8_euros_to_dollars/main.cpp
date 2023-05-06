#include <iostream>  
using namespace std;
int main(){
   const double dollar_in_euro{0.98};
   cout<<"Welcome to the conventer machince from euro to dollar Please Enter the amount of money you want to convert to dollar"<<endl;
   double moneyInEuros{};
   cin>>moneyInEuros;
   double moneyInDollars{};
   moneyInDollars = (moneyInEuros*0.98);
   cout<<"this your money in dollar: "<<moneyInDollars<<"$ Thanks for your waiting"<<endl;
    return 0;
}
