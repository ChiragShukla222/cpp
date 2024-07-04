#include<iostream>
#include<math.h>
using namespace std ;
int main(){
    int n ;
    int bit ;
    int i = 0 ;
    int result =0 ;
    cout<<"enter the number";
    cin>>n;
    while(n!=0){
        bit = n&1;
        result= bit * pow(10,i)+result;
        n=n>>1;
        i++;
    }
    cout<<"binary is = "<<result;



}
