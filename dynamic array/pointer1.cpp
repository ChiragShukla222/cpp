#include<iostream>
using namespace std ;
int main(){
    int a = 9 ;
    int *p =NULL;
    p =&a ;
    cout<<"address of a ="<<p<<"\n";
    cout<<"value="<<*p<<"\n";
    p++;//incrememts the address
    cout<<p<<"\n";
    cout<<*p;//value of address


}
