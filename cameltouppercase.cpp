#include<iostream>
using namespace std ;
int main(){
    char c [] = "cybrom";
    for(int i = 0 ; c[i] != NULL; i++){
        c[i]=c[i]-32;//c[i] = asci value at that index - 32 ex 99 - 32 = 67 >>which is ascii of C ;
    }
    cout<<c;
}
//if convert capital to small +32 ;
