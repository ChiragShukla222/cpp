#include<iostream>
using namespace std ;
int main() {
    int n = 3 ;
    for(int i = 1 ;i <= n ; i++){
        for(int s = n ; s >i ; s--){
            cout<<" " ;
        }
        for(int c = 1 ; c <= i ; c++){
            cout<<"*";
        }
        cout<<"\n";
    }

}
