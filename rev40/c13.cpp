#include<iostream>
using namespace std ;
int main(){
    int a =12 ;
    int b = 14;
    int low = a<b?a:b;
    int ans;
    for(int i =1  ; i < low  ;i++){
        if(a%i==0&&b%i==0){
            ans  = i;
        }

    }
    cout<<ans;

}
