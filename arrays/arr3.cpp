#include<iostream>
using namespace std ;
int main(){
    int crr [5];
    int s = sizeof(crr)/sizeof(crr[0]);
    cout<<"enter five numbers \n";

    for(int  i = 0 ; i < s  ;i++){
        cin>>crr[i];
    }
    for(int i = 0 ; i < s ; i++ ){
        if(crr[i]%2==0){
            cout<<crr[i]<<"\t";
        }
    }





}
