#include<iostream>
using namespace std ;
int main(){
    int arr[5]= {2,1,9,8,7};
    int m =  arr[0];
    int n ;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < len ; i++){
            if(arr[0]<arr[i]){
                m = arr[i];
               // n = m ;
                cout<<m;
            }
    }


}
