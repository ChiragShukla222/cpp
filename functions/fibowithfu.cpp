#include<iostream>
using namespace std ;
void fibo(int a){
    int m = 0 ;
     int n = 1 ;
     int k ;
     for(int i = 1 ; i < a ; i++){
         k = m + n ;
        m = n ;
        k = n ;
        cout<<k<<"\t";
     }

}
int main(){
    int n ;
    cout<<"enter the nubmer";
    cin>>n;
    fibo(n);



}

