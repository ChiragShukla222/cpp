
#include<iostream>
using namespace std ;
int main(){
    int arr[5]={1,4,5,3,8};
    int fmax = 0 ;
    int smax ;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i< len ;i++){
        if(fmax<=arr[i]){
            fmax= arr[i];
        }
    }
    cout<<fmax;
    for(int j = 0 ; j < len ; j++){
            if(fmax>=smax&&smax>=arr[j]){
                smax = arr[j];
            }

    }
    cout<<smax;
}
//refer to qq6.cpp//

