#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,5,-7,-8,-9};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i <= len ; i++ ){
        if(arr[i]<=0){
            cout<<"negative numbers : "<<arr[i]<<"\n";
        }
    }



}
