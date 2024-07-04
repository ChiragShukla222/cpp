#include<iostream>
using namespace std ;
int main(){
    int arr[5]={4,5,67,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int flag =  1 ;
    int m = arr[0];
    for(int  i = 0 ; i < len ; i++){
        if(arr[i]==m){
            flag++;
        }
    }
    if(flag==2){

    }


}
