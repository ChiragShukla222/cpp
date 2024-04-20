/*
a
a b
a b c
*/
#include<iostream>
using namespace std ;
int main() {

    for(int i = 97 ; i<=122 ;i++){
        for(int j = 97 ; j<=i;j++){
            cout<<char(j)<<"\t";

        }
        cout<<"\n";
    }
}
