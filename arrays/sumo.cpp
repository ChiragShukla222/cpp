#include<iostream>
using namespace std ;
int main() {
    int u[7] = {1,5,6,7,8,9,2};
    int m = 0 ;
    int len = sizeof(u)/sizeof(u[0]);
    for(int i = 0 ; i < len ; i++){
        m = m + u[i];
    }
    cout<<m;
}
