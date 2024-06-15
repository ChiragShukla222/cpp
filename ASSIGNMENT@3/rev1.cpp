#include<iostream>
using namespace std ;
int main(){
    int arr[6] = { 1,-2,3,6,-8,-5};
    int neg ;
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"negative elements are :";
    for(int i = 0 ; i < len ; i++){
        if(arr[i]<=0){
            cout<<arr[i];
        }

    }


}
