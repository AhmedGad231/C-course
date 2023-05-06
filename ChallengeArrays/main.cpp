#include <iostream>  
#include <iomanip>
using namespace std;
//void print (int [], size_t);
void printr(int [],size_t);
int main(){
    //cout<<"numbers of array: ";
    size_t size{0};
    cin>>size;
    int arr[size];
 //  cout<<"Enter six integer numbers to calculate the ratios of positive,negative and zero numbers please: ";
   for(int i{0};i<size;i++){
       cin>>arr[i];
   }
  // print(arr,size);
   printr(arr,size);
    return 0;
}
//void print (int arr[], size_t size){
//    cout<<"{";
//    for(size_t i {0};i<size;i++){
//        if(i==5){
//            cout<<arr[i];
//        } else cout<<arr[i]<<" ";
//    }cout<<"}";
//}
void printr(int arr[],size_t size){
    int CounterPositive{0};
    int CounterNegative{0};
    int CounterZero{0};
    double RadPostivie{0};
    double RadNegative{0};
    double RadZero{0};
    for(size_t i{0};i<size;i++){
        if(arr[i]>0){
            ++CounterPositive;
        }else if (arr[i]<0){
            ++CounterNegative;
        }else if(arr[i]==0){
            ++CounterZero;
        }
    }
    RadPostivie =  static_cast<double>(CounterPositive)/(double)size;
    RadNegative = static_cast<double>(CounterNegative)/(double)size;
    RadZero = static_cast<double>(CounterZero)/(double)size;
    //cout<<endl;
   cout<<fixed<<setprecision(6);
   //cout<<"The Radius"<<endl;
    cout<<RadPostivie<<endl;  
    cout<<RadNegative<<endl;
    cout<<RadZero<<endl;

}
//sample input -4, 3, -9, 0, 4, 1