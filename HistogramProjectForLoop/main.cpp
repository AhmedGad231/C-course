#include <iostream>  
#include <vector>
using namespace std;
int main(){
    
//Example 0
    
//    int data_input{};
//    cout<<"how many data inputs you have? ";
//    cin>>data_input;
//    vector<int>data;
//    for(int i{1};i<=data_input;i++){
//        int data_side{};
//        cout<<"Enter your data number "<<i<<": "<<endl;
//        cin>>data_side;
//        data.push_back(data_side);
//    }
//    cout<<"Display the histogram"<<endl;
//    for(auto val:data){
//        for(int i {1};i<=val;i++){
////            if(i%5==0)
////                cout<<"-"<<" ";
//            cout<<"*";
//        }cout<<endl;
//    }

//Example 1

//for(int i=10;i>=1;--i){
//   for(int j=1;j<=i;++j){               **********
//                                        *********
//                                        ********
//       cout<<"*";                       *******
//   }cout<<endl;                         ******
//}                                       *****
//                                        ****
//                                        ***
//                                        **
//                                        *

//Example 2

//for(int i{1};i<=10;i++){          *
//    for(int j{1};j<=i;j++){       **
//        cout<<"*";                ***
//    }cout<<endl;                  ****
//}                                 *****
//                                  ******
//                                  *******
//                                  ********
//                                  *********
//                                  **********

//Example 3

//for(int i{1};i<=7; i++){
//for(int j{1};j<=7;j++){
//   if(j==1)                          1******
//       cout<<"1";                    12*****
//   else if(i>1&&j==2)                123****
//       cout<<"2";                    1234***
//   else if(i>2&&j==3)                12345**
//       cout<<"3";                    123456*
//   else if(i>3&&j==4)                1234567
//       cout<<"4";
//    else if(i>4&&j==5)
//       cout<<"5";
//       else if(i>5&&j==6)
//       cout<<"6";
//       else if(i>6&&j==7)
//       cout<<"7";
//       else cout<<"*";
//} cout<<endl;
//}

//Example 4

// int arr[20];
//for(int i{0},j{1};i<20;++i,++j){
//    cout<<"Enter number "<<j<<": ";
//    cin>>arr[i];
//
//} int sum{};
//  for(int i{0};i<20;++i){
//    cout<<arr[i]<<" ";
//    
//    sum+=arr[i];
//}cout<<endl;
//cout<<"Display the sum of the array "<<sum<<endl;
//double average{};
//average=static_cast<double>(sum)/20.0;
//cout<<"the average of the array is "<<average<<endl;
// 
//Example 5
//int num{},sum{};
//cout<<"Enter a number: ";
//cin>>num;
// int arr[20];
//for(int i{0},j{15};i<20;++i){
//    arr[i]=j;
//    arr[0]=1;arr[2]=4; arr[9]=4;arr[7]=4;arr[4]=4;arr[10]=4;arr[3]=4;
//if(arr[i]==num){
//sum+=1;}
//}
//
//  
//    
//  
//          
//  cout<<"the number you entered there are: "<<sum<<" in the array"<<endl;
//    
   
//Example 6

//int sum{},mult{};
//int A [10]{ 1,2,3,4,5,6,7,8,9,10 };
//int B [10]{ 11,12,13,14,15,16,17,18,19,20};
//int SummationArray[10];
//int MultiplicatonArray[10];
//for(int i=0,j=0;i<10;i++,++j){
//    sum= A[i]+B[i];
//    mult= A[i]*B[i];
//    SummationArray[j]=sum;
//    MultiplicatonArray[j]=mult;
//} cout<<"The summation of the two arrays A & B: "<<endl;
//cout<<"{";
//for(int i=0;i<10;i++){
//    cout<<SummationArray[i];
//    if(i<9)
//    cout<<" ";
//}cout<<"}"<<endl;
//cout<<"The Multiplication of the two arrays A & B: "<<endl;
//cout<<"{";
//for(int i=0;i<10;i++){
//    cout<<MultiplicatonArray[i];
//    if(i<9)
//    cout<<" ";
//}cout<<"}"<<endl;
 
    return 0;
}
