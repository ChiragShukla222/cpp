//to find sum of five digit number ex 12345 sum = 15//
#include<iostream>
using namespace std ;
int main() {
    int arr [5];
    int m = 0;
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"enter 5 numbers to get there sum \n ";
    for(int i = 0 ; i < len ; ++i){
            cin>>arr[i];

    }
   /* for(int i = 0 ; i <  len ; ++i){
        /*cout<<"sum is"<<arr[0]+arr[1]+arr[2]+arr[3]+arr[4]<<"\n";*/
    for(int i= 0 ; i< len ; i++){
         m = arr[i] + m ;

    }
    cout<<m;
}









