#include<iostream>
using namespace std ;
int main(){
    int arr[5]={1,2,3,6,4};
    int krr[5];
    int k[5];
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"original array is :"<<"\t";
    for(int i = 0 ; i < len ;i++){
        cout<<arr[i]<<"\t";
    }

    cout<<"\n for even is:";
    for(int i = 0 ; i < len ; i++){
            if(arr[i]%2==0){
                krr[i]=arr[i];
                cout<<krr[i]<<"\t";
            }
    }
    cout<<"\n odd is :";
    for(int i = 0 ; i <len ;i++){
        if(arr[i]%2!=0){
            k[i]=arr[i];
            cout<<k[i]<<"\t";
        }
    }




}

