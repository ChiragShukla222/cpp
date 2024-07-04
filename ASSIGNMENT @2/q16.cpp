#include<iostream>
using namespace std;
int main(){
    int  n ;
    cout<<"enter the number you want to reverse";
    cin>>n;
    int r = 0 ;
    while(n>0){
        r=r*10+n%10;
        n=n/10;
    }
    cout<<"reverse is : "<<r;

}
