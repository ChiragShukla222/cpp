#include<iostream>
using namespace std ;
int main(){
    char c []="klmopqi" ;
    for(int i = 0 ; c[i]!=NULL; i++){
        c[i] = c[i] -32;
        cout<<c[i];
    }
}
