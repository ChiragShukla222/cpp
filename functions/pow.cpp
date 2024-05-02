#include<iostream>
using namespace std ;
void pow(int a , int b ){
    int t = a ;
    while(b>1){
        t = t*a;
        b--;
    }
    cout<<t;

}
int main(){
int c ;
cout<<"enter the base ";
cin>>c;
int d ;
cout<<"enter the pow";
cin>>d ;
pow(c,d);

}
