#include<iostream>
using namespace std ;
int main(){
    int n , a , b, c , d ;
    int ca , cc , cd;
    int sum ;
    cout<<"enter any three digit number \n";
    cin>>n;
    if(n>=100&&n<=999){
        cout<<"valid number \n";
        a = n /100;
        b = n % 100;
        c =  b/10;
        d = b %10;
        cout<<a<<"\n"<<d<<"\n"<<c<<"\n";
        ca = a*a*a;
        cc = c*c*c;
        cd = d*d*d;
        sum = ca + cd + cc ;
        if(sum==n){
            cout<<"yes it is an arm strong number \n"<<sum;
        }
        else{
            cout<<"not an arm strong number";
        }


    }
    else{
        cout<<" invalid : enter a valid number";
    }


}
