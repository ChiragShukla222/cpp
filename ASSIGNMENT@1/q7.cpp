#include<iostream>
using namespace std;
int main(){
    char n ;
    cout<<"enter the char :  ";
    cin>>n;
    if(char(n)>=65&&char(n)<=120){
        cout<<"it is an alphabetical char";
    }
    else{
        cout<<"not an alphabetical";
    }
}


