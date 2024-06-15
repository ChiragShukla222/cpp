#include<iostream>
using namespace std ;
int main(){
    int arr[5]={1,5,3,0,5};
    int k = INT_MAX;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < len ; i++){
        if(arr[i]<=k){
            k = arr[i];
        }
    }
    cout<<"mininum vlaue is: "<<k;


}
