
/*
a b a
b a b
a b a
*/
#include<iostream>
using namespace std ;
int main() {
    char f = 'b';
    for(int i = 1 ; i <= 3 ; i++){
        for(int j  =1  ; j <= 3 ; j++){
            if(f=='b'){
                f--;
            }
            else if(f=='a'){
                f++;
            }
            cout<<f<<"\t";
        }
        cout<<"\n";
    }
}
