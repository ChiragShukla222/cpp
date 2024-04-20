#include<iostream>
using namespace std ;
int main (){
    for(int i = 5 ; i>=1 ; i--){ //for first run 5 4 3 2 1
            for(int s  = 5 ; s > i ;s--){
                cout<<" ";
            }
      for(int j = 1; j<=5 ;j++){
        cout<<"*";
      }
      cout<<"\n";

    }
}
/*
5 4 3 2 1               1
  4 3 2 1             2 1
    3 2 1           3 2 1
      2 1         4 3 2 1
        1       5 4 3 2 1

*/
