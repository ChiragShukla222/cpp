#include<iostream>
using namespace std ;
int main(){
    int arr[5];
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the 5 elements of array: \n";

    try{
        for(int i = 0 ; i < 5 ; i++){
        cin>>arr[i];
        if(arr[i]>len){
                throw arr[i];
            }
        }
    }

    catch(int h){
        cout<<"array out of index bound";
    }



}
