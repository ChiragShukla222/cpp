#include<iostream>
using namespace std ;
int main() {
    char c[6];
    cout<<"enter the nam eof size five \n";
    cin>>c;
    for(int i = 0 ; c[i]!= NULL ; i++){
        //for lower to uper
            c[i] = c[i] - 32 ;
    }
    cout<<c;

}
