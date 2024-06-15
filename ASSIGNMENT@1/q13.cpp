#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number :";
    cin>>n;
    int a ,b , c ,d ,e,f;
    //10 20 50 100 200 500
    if(n>10){
            a=n/10;
            b=n/20;
            c=n/50;
            d=n/100;
            e=n/200;
            f=n/500;

        cout<<"number of note in 10 rupees are : "<<a<<"\n";
        cout<<"number of note in 20 rupees are : "<<b<<"\n";
        cout<<"number of note in 50 rupees are : "<<c<<"\n";
        cout<<"number of note in 100 rupees are : "<<d<<"\n";
        cout<<"number of note in 200 rupees are : "<<e<<"\n";
        cout<<"number of note in 500 rupees are : "<<f<<"\n";

    }
    else{
        cout<<"no note for this amount";
    }



}
