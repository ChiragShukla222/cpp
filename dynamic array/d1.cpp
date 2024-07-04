#include<iostream>
using namespace std;
int main(){
    int a = 9 ;
    int &p = a ;
    p++;
    cout<<"p="<<p<<"\n";
    cout<<"a="<<a;



}
