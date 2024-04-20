//to get an input
#include<iostream>
using namespace std;
int main() {
    int arr [5] ;
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<"enter 5 roll number \n";
    for(int i = 0 ; i <s ; i++){
        cin>>arr[i];
    }
    cout<<"roll number entered are : \n";
    for(int i = 0 ; i< s ;i++){
        cout<<i<<arr[i]<<"\t";
    }


}
