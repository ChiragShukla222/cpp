#include<iostream>
using namespace std ;
int main(){
    int arr[5] = {4,5,6,1,1};
    int flag=0;
    int m = 0 ;
    int len  = sizeof(arr)/sizeof(arr[0]);
    cout<<"original array is \n";
    for(int i = 0 ; i <len ; i++){
        cout<<arr[i]<<"\t";
    }
        for(int i = 0 ; i < len ;i++){
            if(arr[i]==m){

                    cout<<m<<"\t";
            }
        }


}
