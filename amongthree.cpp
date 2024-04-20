#include<iostream>
using namespace std ;
int main(){
    int a , b , c ;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"enter c";
    cin>>c;
    if(a>=b&& a>c){
        cout<<"A is greater than b and c";

    }
    else if(b>=a && b>c ){
        cout<<"b is greater than a nd c";
    }
    else{
        cout<<"c is greater than b nd c";
    }

}
