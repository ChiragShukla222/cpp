#include<iostream>
using namespace std ;
int main(){
        int arr[] = {1,2,3,4,78,89,606};
        int len  = sizeof(arr)/sizeof(arr[0]);
        int fmax = 0;
        int secmax = 0 ;
        for(int i = 0 ; i <len; i++){
            if(arr[i]>=fmax){
                fmax=arr[i];
            }
        }
        cout<<"first largest number is :"<<fmax<<"\n";
        for(int j = 0 ; j < len ; j++){
            if(arr[j]<fmax&&arr[j]>secmax){
                secmax = arr[j];
            }
        }
        cout<<"second largest number is : "<<secmax;



}
