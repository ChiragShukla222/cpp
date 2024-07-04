#include<iostream>
using namespace std ;
int main(){
    int arr[6]={1,2,3,4,5,2};
    int len  = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i <len  ; i++){
        cout<<arr[i]<<"\t";
    }
    int n ;
    cout<<"\n elemnet which you want to sreach: ";
    cin>>n;
    for(int i = 0 ; i < len ; i++){
        if(arr[i]==n){
            cout<<"\n required element is present in array at index :"<<i;
        }

    }



}
