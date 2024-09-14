#include<iostream>
using namespace std;
int main(){
//     int a= 4;
//     int b =6;
//     cout<<"a & b is: "<<(a&b)<<endl;
//     cout<<"a | b is: "<<(a|b)<<endl;
//     cout<<"a ^ b is: "<<(a^b)<<endl;
//     cout<<"~a is: "<<~a<<endl;
//     cout<<"Left shift operator on 15 is "<<(15<<2)<<endl;
//     cout<<"Left shift operator on 5 is "<<(5<<1)<<endl;
//     cout<<"Right shift operator on 3 is "<<(15>>2)<<endl;
//     cout<<"right shift operator on 5 is "<<(15>>2)<<endl;

//     //increment decrement 
//     int p =6;
//     cout<<"p++ is "<<p++<<endl ;//6
//     cout<<"++p is "<< ++p<<endl;//8
//     cout<<"p-- is "<< p--<<endl;//8
//     cout<<"--p is "<< --p<<endl;//6
//     //for loop
//     //print n nos
//     for(int i =1;i<=5; i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     //sum of n nos
//     int sum =0;
//     for(int j =1; j<=5; j++){
//         sum +=j;
//     }
//     cout<<"sum is : "<<sum<<endl;
//      //fibonaaci series
//      int u = 0;
//      int v = 1;
//      cout<<"Fibonaaci series are : ";
//      cout<< u<<" "<<v<<" ";
//      for(int i =1; i<=10; i++ ){
//         int newNum = u+v;
//         cout<< newNum <<" ";
//         u = v;
//         v = newNum;
//      }
//      cout<<endl;
//      int m ;
//      cin>>m;
//      int count =0;
//      for(int i =2; i<m; i++){
//  if(m%i==0){
//     count++;
//     break;
//  }
//      }
//  if(count==1){
//     cout<<"Not prime number.";
//  }
//  else{
//     cout<<"Prime number.";
//  }
//     return 0;

     for(int i =1;i<=5; i++){
        cout<<i<<" ";
        i++;
    }  ///1 3 5
    cout<<endl;

     for(int i =1;i<=5; i--){
        cout<<i<<" ";
        i--;
    }  
    cout<<endl;
}