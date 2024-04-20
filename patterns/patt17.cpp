/*
3 2 1
  4 5
    6

*/

#include<iostream>
using namespace std ;
int main(){
    int n = 3 ;
        int a = 3;
        int b = 4 ;
    for(int r = n ; r >=1 ; r--){

        for(int s = n ; s>r ; s-- ){
            cout<<" ";
        }
        for(int c = 1; c <=r; c++){   /* 3 2 1 ?*/
            if(r==3){

                cout<<a;
                a--;
            }
            else {
                cout<<b;
                b++;
            }




        }
        cout<<"\n";
    }
}
/*1 2 3
    4 5
      6
*/
