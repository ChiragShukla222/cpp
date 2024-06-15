#include<iostream>
using namespace std ;
int main(){
    int arr[5] = {3,5,6,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int m = INT_MIN ;
    for(int i = 0; i < len ; i++){
        if(arr[i]>=m){
            m = arr[i];
        }
    }
    cout<<"largest element is :"<<m;
}
