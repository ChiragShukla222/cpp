#include<iostream>
using namespace std ;
    int mobile(int a ){
        return (a*10000);
    }
int main(){
    int b , c , m ;
    cout<<"enter the quantity of mobile phones \t";
    cin>>b;
        m = mobile(b)*10/100;
        cout<<mobile(b)+m;

}
//with para meter and return value //
