#include<iostream>
using namespace std ;
int main(){
    int arr [] = {3,2,6,5,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max1 ,max2;
     max1 , max2 =INT_MIN;
    for(int i =0 ; i < len ;i++){
        cout<<arr[i]<<"\t";
    }
    for(int j  = 0  ;j < len ; j++){
        if(arr[j]>max1){
                max2 = max1;
                max1=arr[j];
        }
        if(arr[j]>max2&&arr[j]<max1){
            max2=arr[j];
        }

    }
    cout<<"\n largest is "<<max1;
    cout<<"\n second largest is"<<max2;



}
