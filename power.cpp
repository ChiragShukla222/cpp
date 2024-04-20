#include<iostream>
using namespace std ;
int main(){
    int b ;
    int p ;
    int pow;
    cout<<"enter the base number :";
    cin>>b;
    cout<<"enter the pow of number";
    cin>>p;
    pow =b;//important declaration//

    do{
            pow = pow * b ;
        p--;
    }while(p>1);
    cout<<pow;
}
