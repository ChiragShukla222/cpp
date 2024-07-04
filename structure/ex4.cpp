#include<iostream>
using namespace std ;
int main(){
    int low , high ;
    int a , b ;
    cout<<"enter the vlaue of a \n";
    cin>>a;
    cout<<"enter the value of b \n";
    cin>>b;
    low = a>b?a:b;
    while(1){
        if(low%a==0&&low%b==0){
            cout<<low ;
            break;

        }
        low++;
    }




}
