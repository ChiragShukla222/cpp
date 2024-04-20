#include<iostream>
using namespace std ;
int main(){
    int arr [] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"length = "<<len<<"\n";
    for(int i = 0 ; i <len ;++i){
        cout<<arr[i]<<"\n";
    }


}
