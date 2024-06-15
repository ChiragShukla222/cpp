#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"enter the number";
    cin>>a;
    if(a%5==0&&a%11==0){
        cout<<"divisible by 5 and 11";
    }
    else{
        cout<<"not divisible";
    }
}
