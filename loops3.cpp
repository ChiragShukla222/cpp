//to get table //
#include<iostream>
using namespace std ;
int main(){
    int a =1 ;
    int n ;
    cout<<"enter any number you want to generate table \t";
    cin>>n;
    do{
        cout<<n*a<<"\t";
        a++;
    }
    while(a<=10);
}
