#include <iostream>  
using namespace std;
int main(){
    const int daysinyear{365},daysinMonth{30};
    int NumOfDays{0};
    cout<<"Enter the number of Days please: ";
    cin>>NumOfDays;
    cout<< "The Days You Entered is: "<<NumOfDays<<endl;
    int Days_left{},Years{},Months{},days{};
    Years = NumOfDays/daysinyear;
    Days_left = NumOfDays%daysinyear;
    Months = Days_left/daysinMonth;
    Days_left %= daysinMonth;
    days=Days_left;
    
    cout<< "The Days in Y/M/D Equal "<<endl;
    cout<< "Year: "<<Years<<endl;
    cout<< "Months: "<<Months<<endl;
    cout<< "Days: "<<days<<endl;
    return 0;
}
