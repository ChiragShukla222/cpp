#include<iostream>
using namespace std ;
int main(){
    int n ;
    int f =0 ;
    int t ;
    cout<<"enter any number";
    cin>>n;
     t = n-1;
    while(t>1){
        if(n%t==0){
                f=1;//flag / counter

        break;

        }
        t--;
    }

        if(f==0){
            cout<<"prime number";
        }
        else{
            cout<<"not prime";
        }

    }



