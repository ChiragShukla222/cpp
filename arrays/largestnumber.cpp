#include<iostream>
using namespace std ;
int main() {
    int arr[5] ;
    int len = sizeof(arr)/sizeof(arr[0]);
    int m = 0;
    cout<<"enter five numbers";
    for(int i = 0 ; i< len ;i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i< len ; i++){

        if(m<=arr[i]){
            m = arr[i];

    }

    }
    cout<<m;
}

