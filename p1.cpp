#include<iostream>
using namespace std ;

int main(){
    int a = 0 ;
    int n = 4 ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <=n ; j++){
            if(a==0){
                cout<<a;
                a++;
            }
            else if (a==1){
                cout<<a;
                a--;
            }
        }
        cout<<"\n";
    }



}
