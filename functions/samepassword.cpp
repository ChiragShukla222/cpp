#include<iostream>
using namespace std ;

    void password(int a , int b ){
        if(a==b){
            cout<<"ps matched";
        }
        else{
            cout<<"does not match renter correctly";
        }
    }
    int main(){
        int c ;
        cout<<"enter the password";
        cin>>c;
        int d ;
        cout<<"enter the password again";
        cin>>d;
        password(c,d);
    }


