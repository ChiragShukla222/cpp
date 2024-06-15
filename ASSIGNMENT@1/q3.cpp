#include<iostream>
using namespace std ;
int main(){
    int a ;
    cout<<"enter the number you want to check ";
    cin>>a;
    if(a<=0){
        cout<<"-ve";
    }
    else if(a>=0){
        cout<<"+ve";
    }
    else if(a==0){
        cout<<"0";
    }

}
