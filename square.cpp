#include<iostream>
using namespace std ;
int main(){
    int a ;
    cout<<"number : " ;
    cin>>a;
    do{
        cout<<a*a<<"\t";
        a--;
    }while(a>=1);
}
