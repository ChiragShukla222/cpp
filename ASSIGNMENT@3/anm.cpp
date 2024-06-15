#include<iostream>
using namespace std ;
int main(){
    int arr[] = {1,2,2,3,4};
    int flag = 0 ;
    int ele;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < len  ;i++){
            cout<<arr[i]<<"\t";
    }
    for(int i = 0 ; i < len ; i++){
        for(int j  = i ; j < len ; j++){
            if(arr[i]==arr[j]){
                flag++;

            }
        }
        //cout<<arr[i];
    }
    if(flag==2){
        cout<<flag;
    }


}
