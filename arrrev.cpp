#include<iostream>
using namespace std ;
int main(){
    int k ;
    int arr[4] = {1,50,6,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i  = 0 ; i < len ; i++){
        for(int j = 0; j < len-1  ; i++){
            if(arr[i]<arr[j+1]){
            k = arr[i];
            arr[i]= arr[j+1];
            arr[j+1]=k;
            cout<<arr[i]<<"\n";
            }

        }
    }


}
