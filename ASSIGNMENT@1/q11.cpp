#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the week number : ";
    cin>>n;
    if(n==1){
        cout<<"sunday";
    }
    else if(n==2){
        cout<<"monday";
    }
    else if(n==3){
        cout<<"tuesday";
    }
    else if(n==4){
        cout<<"wednesday";
    }
    else if(n==5){
        cout<<"thrusday";
    }
    else if(n==6){
        cout<<"friday";
    }
    else if(n==7){
        cout<<"saturday";
    }
    else{
        cout<<"enter a valid num";
    }
}
