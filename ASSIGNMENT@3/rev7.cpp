#include<iostream>
using namespace std ;
int main(){
    int arr[6] = {7,8,9,10,11,12};
    int n , m ;
    int len = sizeof(arr)/sizeof(arr[0]);
        cout<<"before deletion  \n";
    for(int i = 0 ; i < len ; i++){
            cout<<arr[i]<<"\t";
        }
    cout<<" \n enter the index for which the vlaue is to be deleted \n";
    cin>>n;

        for(int i = n ; i < len-1; i++){
                arr[i] = arr[i+1];
        }

        cout<<"after deletion \n";
    for(int i = 0 ; i < len ; i++){
        cout<<arr[i]<<"\t";
    }


}
