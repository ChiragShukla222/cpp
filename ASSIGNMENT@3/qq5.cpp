#include<iostream>
using namespace std ;
int main(){
        int arr[] = {3,2,5,6,4};
        int pos;
        int len = sizeof(arr)/sizeof(arr[0]);
        for(int i = 0 ; i <len ; i++){
                cout<<arr[i]<<"\n";
        }
        cout<<"enter the position for which you want to delete";
        cin>>pos;
        if(pos<0||pos>len){
            cout<<"invalid";
        }
        else{
                cout<<"after deletion array is :";
            for(int i = pos ; i<len-1;i++){
                arr[i]=arr[i+1];
            }
            len--;
            for(int i  = 0 ; i<len ; i++){
                cout<<arr[i]<<"\t";
            }
        }


}
