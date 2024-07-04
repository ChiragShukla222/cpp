#include<iostream>
using namespace std ;
void hkl(int a , int b){
    int low = a>b?a:b;
    int ans ;
    for(int i= 1 ; i < low ; i++){
        if(a%i==0&&b%i==0){
            ans = i ;
            cout<<ans;
        }
    }
}
int main(){
    int m , n ;
    cout<<"enter the two number";
    cin>>m>>n;
    hkl(m,n);
}
