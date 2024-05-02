#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    for(int r  = n ; r >= 1; r--){
        for(int spc  = n ; spc >  r ; spc--){
            cout<<" ";
        }
        for(int c = r ; c >=1 ; c--){
            cout<<c;
        }
        cout<<"\n";
    }

}
/*54321
    4321*/
