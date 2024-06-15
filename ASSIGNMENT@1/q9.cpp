#include<iostream>
using namespace std;
int main(){
    char n ;
    cout<<"enter a char : ";
    cin>>n;
    if(char(n)>=65&&char(n)<=120){
        cout<<"alphabet";
    }
    else if(n>='0'&&n<='9'){
        cout<<"number";
    }
    else{
        cout<<"special char";
    }
}
