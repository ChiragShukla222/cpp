#include<iostream>
using namespace std ;
int main(){
    int arr[5] = {1,23,12,14,18};
    int l[5];
    int p[5];
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"original array is \n";
    for(int i = 0 ; i < len ;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n even :\n";
    for(int i = 0; i < len  ;i++){
        if(arr[i]%2==0){
            l[i]=arr[i];
            cout<<l[i]<<"\t";
        }
    }
    cout<<"\n odd : \n";
    for(int i = 0; i < len ;i++){
        if(arr[i]%2!=0){
            p[i]=arr[i];
            cout<<p[i]<<"\t";
        }
    }
}
