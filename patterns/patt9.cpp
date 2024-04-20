#include<iostream>
using namespace std ;
int main() {
    int a = 1 ;
    for(int i = 3 ; i>=1 ; i--){
        for(int j =1  ;j<=i; j++ ){
            cout<<a<<"\t";
            a++;
        }
        cout<<"\n";
    }

}
