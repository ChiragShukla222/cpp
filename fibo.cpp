#include<iostream>
using namespace std ;
int main(){
    int num ;
    int n1 = 0 ;
    int n2 = 1;
    int n3 ;
    cout<<"enter the num ";
    cin>>num;
    cout<<n1<<"\t";
    cout<<n2<<"\t";
    for(int i = 0 ; i<num ;i++){
        n3=n1+n2;//n3=1
        n1=n2;
        n2=n3;
        cout<<n3<<"\t";
    }
    //cout<<n3;


}
