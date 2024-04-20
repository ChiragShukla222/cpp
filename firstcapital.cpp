#include<iostream>
using namespace std ;
int main() {
    char c [6];
    cout<<"enter the name \n";
    cin>>c;
    for(int i = 0 ; c[i] != NULL ; i++){
            if(c[0]>=65 && c[0] <=90){
                c[0]= c[0]+32;
            }
            else if(c[0]>=97 && c[0]<=122){
                c[0] = c[0] -32 ;
            }

    }
    cout<<c;
}
