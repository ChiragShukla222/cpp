#include<iostream>
using namespace std ;
int main(){
    int m=0;
    int arr[6] = {1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<len ; i++){
            m = m+arr[i];

    }
    cout<<m;


}
