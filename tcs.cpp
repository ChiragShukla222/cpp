#include<iostream>
using namespace std ;
int main(){

    int n ;
    cin>>n;
    int m ;
    cin>>m;
    int a ;
    int b = 0;
    if(n>=1&&n<=40&&m>=1&&m<=40){
            //3<=5
            for(int i = n ; i <= m ; i++){
                a = i*i*i ;//n = 2 and m =5 i= 8 n= 3 //27+8;

                b = b + a;//a=8+0; a=8//

            }
            cout<<b;




    }

}
