#include<iostream>
using namespace std ;
int main(){
    int arr[5]= {5,9,8,6,2};
        int len = sizeof(arr)/sizeof(arr[0]);
        for(int i = 0 ; i<len ; i++){
                if(arr[i]!=arr[2]){
                    cout<<arr[i];
                }
        }

}
