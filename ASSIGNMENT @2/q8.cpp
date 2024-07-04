#include<iostream>
using namespace std ;
int main () {
    int n ;
    cout<<"enter the number : ";
    cin>>n;
    int m = 0 ;
    for(int i = 1 ; i <= n ;i++){
        if(i%2!=0){
            m = m+i;
        }
    }
    cout<<"sum of all odd is :"<<m;



}
