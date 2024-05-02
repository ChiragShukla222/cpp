#include<iostream>
using namespace std ;
int main() {
    int arr[5];
    int m = 0 ;
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the numbers"<<"\n";
    for(int i = 0 ; i < len ;i++){

        cin>>arr[i];
    }
    for(int i = 0 ; i < len ; i++){
        if(m<=arr[i]){
            m = arr[i];
        }


    }
     cout<<m;


}
