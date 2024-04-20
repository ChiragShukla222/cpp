#include<iostream>
using namespace std ;
int main(){

    char c ;
    cout<<"enter gender male  or female \n";
    cout<<"can enter in two way male : M or m and for female : F or f \n";
    cin>>c;
     if(c=='M'||c=='m'){
        cout<<"male";
    }
    else if(c=='F'||c=='f'){
        cout<<"female";
    }
    else{
        cout<<"others";
    }


}
