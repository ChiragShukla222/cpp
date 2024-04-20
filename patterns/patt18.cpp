#include<iostream>
using namespace std ;
int main(){
    int n = 3 ;
    char a = 99;
    char b = 101;
    for(int r = n ; n >= 1 ; r--){
        for(int spc = n  ; spc > r ; spc--){
            cout<< " ";
        }
        for(int c = 1 ; c<=r ;c++){
            if(r==3){
                cout<<a;
                a--;
            }
            else{
                cout<<b;
                b++;
            }
        }
        cout<<"\n";

    }




}
