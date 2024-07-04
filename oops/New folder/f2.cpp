#include<iostream>
using namespace std ;
int main(){
    int arr[5]={5,6,312,12,700};
    int m = 0 ;
    int len  = sizeof(arr)/sizeof(arr[0]);
    cout<<"sum of all element is :";
    for(int i =0 ; i < len  ;i++){
        m = arr[i]+m;
    }
        cout<<m;
}
