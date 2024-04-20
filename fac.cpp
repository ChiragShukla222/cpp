#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"enter any number";
    cin>>n;
    int t ;
    t = n-1;
    while(t>=1){
        n = n*t;
    }
    t--;
    cout<<n;

}
