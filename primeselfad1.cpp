#include<iostream>
using namespace std ;
int main() {
    int  n ;

    int f = 0;
    cout<<"number \t";
    cin >>n;
    for(int t =n ; t>0 ;t--){
            if(n%t==0){
                f++;

            }
    }
            if(f==2){
                cout<<"prime";
            }
            else{
                cout<<"not prime";
            }

}
