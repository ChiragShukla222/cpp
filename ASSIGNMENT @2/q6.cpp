#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the number :";
    cin>>n;
    int m = 0;
    for(int i = 1 ; i<=n ;i++){
        m = m+i;
        //m = i;
    }
    cout<<"sum is :"<<m<<"\n";



}
