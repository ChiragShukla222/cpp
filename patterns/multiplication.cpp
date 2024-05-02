#include<iostream>
using namespace std ;
int main() {
    int a[5]={7,8,2,3,4};
    int m = 1;
    for(int i = 0 ; i <5 ; i++){
        m = a[i]*m;
    }
    cout<<m;
}
