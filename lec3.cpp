#include<iostream>
using namespace std ;
int main(){
// int a;
// cin>>a;
// cout<<"The value of a is : "<< a <<endl;
// if(a>0){
//     cout<<" a is positive ."<<endl;
// }
// else{
//     cout<<"a is negative."<<endl;
// }
// int  b , c;
// cin>> b>>c;
// int a = 2;
// int b = a+1;
// if((a=3)==b){
//     cout<<a;
// }
// else{
//     cout<<a+1;
// }
//HOMEWORK 
// char ch ;
// cin>>ch;

// if(ch>='a' && ch <='z' ){
//     cout<<"Lowercase";
// }
// else if (ch>='A' && ch<='Z'){
//     cout<<"Uppercase";
// }
// else
// {
//   cout<<"numeric"; 

// }
int n ;
cin>>n;
// int i =1;
// int sum = 0;
// while(i<=n){
//     cout<<"The value is : " << i<<endl;
//       sum = sum +i;
//     i++;
// }
// cout<<"Sum is : "<<sum;

///PRIMENUMBER OR NOT USING WHILE LOP 

// int i =2;
// int count =0;
// while(i<n){
// if(n%i == 0){
//     count++;
//     break;
// }
// else{
//    i++;
// }
// }

// if (count == 1){
//     cout<<"not prime ";
// }
// else{
//     cout<<"prime";
// }
//SUM OF EVEN NUMBER 
// int i =2;
// int sum = 0;
// while(i<=n){
//     sum = sum + i;
//     i =i+2;
// }
// cout<<sum;

//PATTERN PROBLEM 

// int i =1;
// while(i<=n){
//     int j = 1;
//     while(j <= n){
// cout<<"*";
// j++;
// }
// cout<<endl;
// i++;
// }
int i =1;
while(i<=n){
    int j =1;
    while(j<=n){
        cout<<i;
        j++;
    }
    cout<<endl;
    i++;
}
 }