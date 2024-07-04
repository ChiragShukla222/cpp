#include<iostream>
using namespace std ;
int main(){
    int arr[5] = {1,6,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int l = INT_MIN;
    int m ;
    for(int i = 0 ; i< len ; i++){
        if(arr[i]>=l){
            l=arr[i];
        }
    }
    cout<<"first largest number is :"<<l;
    for(int i = 0  ; i <len ; i++){
        if(arr[i]<l&&arr[i]>=arr[i-1]){
                m = arr[i];

        }
    }
    cout<<"second largest is :"<<m;


}
