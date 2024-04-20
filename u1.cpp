#include<iostream>
using namespace std ;
int main(){
   int a ;
   cout<<"enter the age";
   cin>>a;
   int t = a-1;
   for(int i= 0 ; i>=1 ; i--){
        a=t*a;
    cout<<a;
   }



}
