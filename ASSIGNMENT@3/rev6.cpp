#include<iostream>
using namespace std ;
int main(){
    int arr[5]={1,2,3,5,6};
    int jrr[5];
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"before copying \n";
    for(int i= 0 ; i <len ;i++){
        cout<<arr[i]<<"\t";
    }

    cout<<"\n after copying :";
    for(int i = 0 ; i < len ; i++){
            jrr[i]=arr[i];
            cout<<jrr[i]<<"\t";
    }

}
