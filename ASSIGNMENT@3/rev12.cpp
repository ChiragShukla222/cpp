#include<iostream>
using namespace std ;
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={6,7,8,9,10};
    int crr[10];
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < len ;i++){
            crr[i]=arr[i];

            cout<<crr[i];
        }


}
