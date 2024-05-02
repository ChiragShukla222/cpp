#include<iostream>
using namespace std ;
int main() {
    int n = 3;
    int m  = 0 ;
    for(int i = 1 ; i <= n ; i++){
            for(int spc = n ; spc > 1 ; spc--){
                cout<<" " ;
            }
        for(int j = 1 ; j<= n ;j++){
            if(m==0){
                m++;
            }
            else if(m==1){
                m--;
            }
            cout<<m<<"\t";
        }
        cout<<"\n";
    }


}
