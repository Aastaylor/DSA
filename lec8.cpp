#include<iostream>
using namespace std ;
//power of an number 
int pow(int a, int b){
    int an =1;
    for(int i =1; i<=b; i++){
        an = an * a;
    }
    return an;
}
//number is even or odd 

bool isEven(int n ){
    if(n & 1){
        return 0;
    }
    else{
        return 1;
    }
}
//nCr
int fact(int n){
    int ans =1;
    for(int i=1; i<=n; i++){
        ans = ans *i;
    }
    return ans;
}
int nCr(int n, int r){
    int answer;
    answer = (fact(n))/(fact(r) * fact(n-r));
    return answer;
}
void printCounting(int n){
    for(int i =1; i<=n; i++){
        cout<<i <<" ";
    }
}
bool isPrime(int n ){
    for(int i =2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int printAP(int n ){
    int ans = (3*n)+7;
    return ans ;
}
int oneBits(int a, int b ){
    int count =0;
    while(a!=0){
    if(a&1==1){
        count++;
    }
    a>>1;
    }
    while(b!=0){
    if(b&1==1){
        count++;
    }
    b>>1;
    }
    return count;
}


int main(){
    //switch case
    // int a =2;
    // cout<<endl;
    // switch(num){
    //     case 1: cout<<"Topper"<<endl;
    //     break;
    //     case 2: cout<<"Runner up"<<endl;
    //     break;
    //     default: cout<<"NOT A TOPPER."<<endl;
    // }
    // cout<<endl;
    // int a =2;
    // int b =3;
    // char op;
    // cin>>op;
    // switch(op){
    //     case '+': cout<<b+a<<endl;
    //     break;
    //     case '-': cout<<b-a<<endl;
    //     break;
    //     case '*': cout<<b*a<<endl;
    //     break;
    //     case '/': cout<<b/a<<endl;
    //     break;
    // }
    //functions
    // int a,b;
    // cin>>a >>b ;
    // int ans = pow(a,b);
    // cout<<ans<<endl;
    // int n ;
    // cin>>n;
    // cout<<bool(n);
    // int n , r;
    // cin>>n >>r;
    // cout<<nCr(n,r)<<endl;
    // int n ;
    // cin>>n;
    // printCounting(n);
    // int n ;
    // cin>>n;
    // cout<< isPrime(n);
    // int n ;
    // cin>>n;
    // cout<<printAP(n);
 int a, b;
 cin>>a>>b;
 int ans = oneBits(a,b);
 cout<<ans;
    return 0;
}