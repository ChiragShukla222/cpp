#include<iostream>
using namespace std ;
int main(){
    int arr[5]={1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < len ; i++){
        if(arr[i]%2!=0){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }


}
