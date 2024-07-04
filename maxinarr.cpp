#include<iostream>
using namespace std ;
int main(){
    int k = 0 ;
     int arr[10] ;
     int len = sizeof(arr)/sizeof(arr[0]);
     cout<<"enter the ten elments for array";
     for(int i = 0 ; i < len; i++){
        cin>>arr[i];
     }
        for(int i = 0 ; i < len ; i++){
            if(k<=arr[i]){
                k=arr[i];

            }
        }
          cout<<k;
}
