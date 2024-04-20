#include<iostream>
using namespace std ;
int main() {
    int n = 4 ;
    for(int i  = 1 ; i <= n ; i ++ ){
        for(int j = 1 ; j<=i; j++){
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }


    for(int i = n ; i >=1 ; i--){
        for(int j = 1 ; j<i  ; j++){/*j<i cause it wil print three start instead of 4star which will make it double (j<=i) case*/
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }

/*right */
    for(int  r = 1; r<= 8 ; r++){
        for(int spc = 8 ; spc > r ; spc--){
            cout<<" ";
        }
        for(int c =  1 ; c <=  r ; c++){
                cout<<"*";

        }
        cout<<"\n";
    }

    for(int r =  8 ; r >=1 ;r-- ){
        for(int spc = 8 ; spc>r ; spc--){
            cout<<" ";
        }
        for(int c = 1 ; c<=r ; c++){
            cout<<"*";
        }
        cout<<" \n";

    }




}

