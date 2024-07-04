#include<iostream>
using namespace std ;
int main(){
    int arr[5] = { 12,86,96,45,23};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sl ;
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
    for(int i = 0 ; i < len ;i++){
        if(arr[i]<maxi&&arr[i]>=arr[i-1]){
            sl = arr[i];
        }
    }
    cout<<"\n second largest element is"<<sl;
}
