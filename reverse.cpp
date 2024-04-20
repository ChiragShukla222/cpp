//todo 321 to 123
#include<iostream>
using namespace std;
int main(){
    int n;
    int r =0 ;
    cout<<"enter the number you want to reverse";
    cin>>n;
    while(n>0){
        r=r*10+n%10;
        n=n/10;
    }
    cout<<r;






}
