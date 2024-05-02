#include<iostream>
using namespace std ;
int main(){
    int p[6] = {1,4,7,8,5,2};
    int len = sizeof(p)/sizeof(p[0]);
    int m = p[0];
    for(int i = 0 ; i < len ; i++){
        if(m>=p[i]){
            m =p[i];
        }
    }
    cout<<m;
}
