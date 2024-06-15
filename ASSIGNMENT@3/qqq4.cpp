#include<iostream>
using namespace std ;
int main(){
    int arr[] = {1,3,4,5,7,8,8,9};
    int pos ;
    int len  = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < len  ;i++){
            cout<<arr[i]<<"\t";
    }
    cout<<"\n enter the position for which you want to delete the elment \n";
    cin>>pos;
    if(pos>0&&pos<len){
            cout<<"after deletion array is : "<<"\n";
        for(int i = pos ; i < len  ; i++){
            arr[i] = arr[i+1];
        }
        for(int i = 0 ; i < len  ; i++){
            cout<<arr[i]<<"\t";
        }
    }
    else{
        cout<<"invalid input";
    }


}
