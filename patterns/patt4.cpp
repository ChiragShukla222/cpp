/*
a
b c
d e f
*/
#include<iostream>
using namespace std ;
int main() {
    int a =97 ;
    for(int i = 97 ; i<= 99 ; i++){
        for(int j =97 ; j<=i ; j++){
            cout<<char(a)<<"\t";
            a++;

        }
        cout<<"\n";
    }
}
