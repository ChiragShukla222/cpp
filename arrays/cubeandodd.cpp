#include<iostream>
using namespace std ;
int main(){
    int y [7] ;
    int b ;
    int m ;
    int len = sizeof(y)/sizeof(y[0]);
    cout<<"enter the 7 nubmers \n";
    for(int i = 0 ; i < len ; i++) {

            cin>>y[i];
    }
    for(int i = 0 ; i <len ; i++){
        if(y[i]%2!=0){
            y[i] = y[i]*y[i]*y[i];
              cout<<y[i]<<"\n";
        }

    }


}
