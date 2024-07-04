#include<iostream>
using namespace std ;
int main() {
    int a ,b;
    cout<<"enter the first num";
    cin>>a;
    cout<<"enter the second num";
    cin>>b;
    int ans;
    int low = a<b?a:b;
    for(int i = 1 ; i<=low;i++){
        if(a%i==0&&b%i==0){
            ans = i ;
        }
    }
    cout<<"HCF IS :"<<ans;


}
