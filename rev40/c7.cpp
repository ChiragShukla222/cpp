#include<iostream>
using namespace std ;
int main(){
    int m  ;
    int i =1 ;
    int n =100;
    while(i<=n){

        if(i%2==0){
            m = m + i ;

        }
        i++;

    }
    cout<<"sum is "<<m;

}
