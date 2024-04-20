/*
                        0 1 0
                         1 0 1
                         0 1 0

*/
#include<iostream>
using namespace std;
int main() {
    int f = 1;
    for(int i = 1 ; i<= 3 ; i++){
        for(int j = 1 ; j<= 3 ;j++){
             if(f==1){
                f--;

             }
             else if(f==0){
                f++;
             }
             cout<<f<<"\t";
        }
        cout<<"\n";
    }
}
