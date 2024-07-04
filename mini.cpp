#include<iostream>
using namespace std ;
int main(){
    int arr[8];
    int m = arr[0];
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the element";
    for(int i = 0 ; i < len ;i++){
        cin>>arr[i];
    }
    for(int i =0 ; i < len ;i++){
        if(arr[i]<=m){
                m = arr[i];

        }
    }
    cout<<m;
}
