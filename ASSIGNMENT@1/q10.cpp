#include<iostream>
using namespace std ;
int main(){
    char a ;
    cout<<"enter the char : ";
    cin>>a;
    if(char(a)>=65&&char(a)<=90){
        cout<<"upper case";
    }
    else if(char(a)>=95&&char(a)<=120){
        cout<<"lower case";
    }

}
