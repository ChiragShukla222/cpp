#include<iostream>
using namespace std ;
int main(){
    int arr [5];
    int temp ;

    cout<<"enter the five elements \n";
    for(int i = 0 ; i < 5 ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < 5 ; i++){
             temp = arr[i]+temp;
    }
    cout<<temp;
}
