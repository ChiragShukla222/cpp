#include<iostream>
using namespace std ;
int main(){
    int arr[5]={1,-5,-9,5,2};
    int len  = sizeof(arr)/sizeof(arr[0]);
    cout<<"negative elements are \n";
    for(int i =0 ; i <len ; i++){
            if(arr[i]<0){
                cout<<arr[i];
            }
    }
}
