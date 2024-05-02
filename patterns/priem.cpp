#include<iostream>
using namespace std ;
int main() {
    int op[5]={1,2,17,19,13};
    int flag = 0 ;
    for(int i = 0 ; i < 5 ; i++)
     int p = op[i] ;
     int k = p;
     while(k>1){
        if(op%k==0){
            flag++;
        }
        k--;
     }
     if(k==2){
        cout<<k<<"\t";
     }
     cout<<"\n";


}
