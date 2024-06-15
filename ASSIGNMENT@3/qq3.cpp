#include<iostream>
using namespace std ;
int main(){
    int  arr[6] ={1,2,3,7,8,6};
    int maxi = 0;
    int mini=arr[0];
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<len ;i++){
        if(maxi<=arr[i]){
            maxi=arr[i];
        }
    }
    cout<<"largest number is : "<<maxi<<"\n";
    for(int j = 0 ; j <len ;j++){
        if(mini>=arr[j]){
            mini = arr[j];
        }
    }
    cout<<"smallest number is : "<<mini;



}
