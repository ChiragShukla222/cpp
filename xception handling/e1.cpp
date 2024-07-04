#include<iostream>
using namespace std ;
int main(){

int a , b , c ;
        cout<<"enter the a : \n";
        cin>>a;
        cout<<"enter the b :";
        cin>>b;

    try{
        if(b==0){
            throw b ;
        }
          c =a /b ;
          cout<<c;

    }

    catch(int h ){
        cout<<"denominator should not be zerooo";
    }
    cout<<"\n done";
}
