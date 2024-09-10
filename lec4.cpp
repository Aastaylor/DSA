#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin>>n;
    // int i =1;
    // while(i <=n){
    //     int j =1;
    //     while(j<=n){
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // int i =1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=n){
    //         cout<<n-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // return 0;
    // int i =1;
    // int count =1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=n){
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // int i =1;
    // while (i<=n){
    //     int j =1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // int i =1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int i =1;
    // int count =1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=i){
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int i = 1;
    // while ( i <= n){
    //     int j =1;
    //     while(j<=i){
    //         cout<<i-j+1;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int i =1;
    // while(i <=n){
    //     int j =1;
    //     while(j<=n){
    //         char ch ='A' + i -1;
    //         cout<<ch;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int i =1;
    // char ch ='A';
    // while(i<=n){
    //  int j =1;
    //  while(j<=n){
    //     cout<<ch;
    //     ch++;
    //     j++;
    //  }
    //  i++;
    //  cout<<endl;
    // }
    // int i =1;
   
    // while(i<=n){
    //  int j =1;
    //  while(j<=n){
    //     char  c ='A' + i +j - 2;
    //     cout<< c;
    //     j++;
    //  }
    //  cout<<endl;
    //  i++;
    // }
    // int i =1;
    // while(i <=n){
    //     int j =1;
    //     while(j<=n){
    //         cout<< i +j -1;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int i =1;
    // char ch ='A';
    // while(i<=n){
    //     int j =1;
    //     while(j <=i){
    //         cout<<ch;
    //         j++;
    //     }
    //     ch++;
    //     i++;
    //     cout<<endl;
    // }
    // int i =1;
    // while(i<=n){
    //     int j =1;
    //     while(j <=i){
    //        char ch = 'A' +i+j-2 ;
    //        cout<<ch;
    //        j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int i =1;
    // while(i<=n){
    //     int j =1;
    //     char ch = 'A' + n -i;
    //    while(j<=i){
    //     cout<<ch;
    //     j++;
    //    }
    //    i++;
    //    cout<<endl;
    // }
    // int i =1;
    // while(i<=n){
    //     int j =1;
    //     char ch = 'A' +n -i;
    //     while(j<=i){
    //         cout<<ch;
    //         ch++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int i =1;
    // while(i<=n){
    // int space = n - i;
    // while(space){
    //     cout<<" ";
    //     space--;
    // }
    // int j =1;
    // while(j<=i){
    //     cout<<"*";
    //     j++;
    // }
    // cout<<endl;
    // i++;
    // }
    // int i =n;
    // while(i){
    //     int j =1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     int space = n -i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     i--;
    //     cout<<endl;
    // }
    // int i =1;
    // while(i<=n){
    //     int space = i-1;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j = n - i +1;
    //     while(j){
    //         cout<<i;
    //         j--;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int i =1;
    // while(i<=n){
    //     int space = n -i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    //  int i = 1 ; 
    //  while(i<=n){
    //     //1st triangle 
    //  int space = n-i;
    //  while(space){
    //     cout<<" ";
    //     space--;
    //  }
    //  //2nd triangle
    //  int j =1;
    //  int count = 1;
    //  while(j<=i){
    //     cout<<count;
    //     count++;
    //     j++;
    //  }
    //  //third triangle 
    //  int k = i-1;
    //  int counts = i-1;
    //  while(k){
    //     cout<<counts;
    //     counts--;
    //     k--;
    //  }
    //  i++;
    //  cout<<endl;
    //  }
    int i =1;
    while(i<=n){
        //first tri
        int count =1;
        int j =n-i+1;
        while(j){
       cout<<count;
       count++;
       j--;
        }
        //second tri
        int star = 2*i -2;
        while(star){
            cout<<"*";
            star--;
        } 
        int k = n-i+1;
        int counts =n - i + 1;
        while(k){
            cout<<counts;
            counts--;
            k--;
        }
        i++;
        cout<<endl;
    }
     
}