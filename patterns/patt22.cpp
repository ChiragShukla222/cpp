#include<iostream>
using namespace std ;
int main(){
    int n = 6 ;
    int f = 1 ;
    for(int i = 1 ; i<= n ; i++){

        for(int c = 1 ; c < i ; c++  ){
            if(f==0){
                f++;
            }
            else if(f==1){
                f--;
            }
            cout<<f<<"\t";
        }
        cout<<"\n";
    }


}
