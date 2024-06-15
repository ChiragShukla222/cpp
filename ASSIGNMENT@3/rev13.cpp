#include<iostream>
using namespace std ;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"arry is :\n";
    for(int i = 0 ; i < len ; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"reverse array is :";
    for(int i = len-1 ; i >= 0 ; i--){
        cout<<arr[i]<<"\t";
    }
}
