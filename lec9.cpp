#include<bits/stdc++.h>
#include<math.h>
using namespace std ;
int getMax(int num[], int size){
    int maxi = INT_MIN;
    for(int i =0; i<size; i++){
        if(num[i]>maxi){
            maxi= num[i];
        }
    }
    return maxi;
}
int getMin(int num[], int size){
    int mini = INT_MAX;
    for(int i =0; i<size; i++){
        if(num[i]<mini){
            mini= num[i];
        }
    }
    return mini;
}
int sumArray(int arr[],int n){
    int sum =0;
    for(int i =0;i<n;i++){
        sum = sum +arr[i];
    }
    return sum;
}
bool search(int arr[], int n , int key ){
    for(int i =0; i<n; i++){
    if(key==arr[i]){
        return 1;
    }
}
return 0;
}
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
        cout<<" Printing the array"<<endl;
        for(int i =0; i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Printing done."<<endl;
    }
int main(){
    // int num[15];
    // cout<<"Value ata the 14 index: "<<num[14]<<endl;
    // int first[3] ={2,7};
    //  int third[15] = {2,7};
    // int n =15;
    // int thirsdSize = sizeof(third)/sizeof(int);
    // char ch[5] ={'a','b','c','d','e'};
    // double firstdouble[5];
    // float firstfloat[5];
    // bool firstbool[5];
    int size ;
    cin>>size;
    int num[100];
    for(int i =0; i<size; i++){
        cin>>num[i];
    }
//     cout<<"Maximum value is "<<getMax(num,size)<<endl;
//     cout<<"Minimum  value is "<<getMin(num,size)<<endl;
//     cout<<"Sum of all element "<<sumArray(num,size)<<endl;
//    int key;
//    cin>>key;
//    if(search(num,size,key)){
//     cout<<"Key is present . ";
//    }
//    else{
//     cout<<"Key is not present.";
//    }
reverse(num,size);
printArray(num,size);
return 0;
}