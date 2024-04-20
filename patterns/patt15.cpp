#include<iostream>
using namespace std ;
int main() {
    int n = 5 ;
    for(int r = n ; r >=1 ; r--){
        for(int s = n ; s>r ;s--){
            cout<<" ";
        }
        for(int c = n ; c >=r ; c--){
            cout<<c;
        }
        cout<<"\n";
    }

}
