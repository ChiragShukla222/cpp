#include<iostream>
using namespace std ;
int main(){
    int arr[5] = {1,5,97,88,74};
    int len  = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < len  ; i++){
        if(arr[i]%2==0){
            cout<<"even elements are : \n"<<arr[i];
        }
        else{
            cout<<"\n odd elements are :\n"<<arr[i];
        }
    }
}
