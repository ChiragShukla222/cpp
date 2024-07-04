#include<iostream>
using namespace std ;
int main(){
    int arr[5]={41,85,96,52,63};
    int len  = sizeof(arr)/sizeof(arr[0]);
    cout<<"arr before deletion";
    for(int i = 0 ; i < len ;i++){
        cout<<arr[i]<<"\t";
    }
        int n ;
    cout<<"enter the position which you want to delete \n";
    cin>>n;

    for(int i = n ; i < len-1 ;i++){
        arr[i] = arr[i+1];
    }
    cout<<"after the deletion \n";
    for(int i = 0 ; i < len-1 ; i++){
        cout<<arr[i]<<"\t";
    }



}
