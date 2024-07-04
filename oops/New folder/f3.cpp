#include<iostream>
using namespace std ;
int main(){
    int arr[6] = {1,2,80,960,100,588};
    int len = sizeof(arr)/sizeof(arr[0]);
    int mini = INT_MAX;
    int maxi = INT_MIN ;
    for(int i = 0 ; i < len ; i++){
        if(arr[i]>=maxi){
            maxi=arr[i];
        }
    }
    cout<<"the maximum element is"<<maxi;
    for(int i = 0 ; i < len ; i++){
        if(arr[i]<=mini){
            mini = arr[i];
        }
    }
    cout<<"\n minimum element is :"<<mini;
}
