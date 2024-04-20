#include<iostream>
using namespace std ;
int main() {
    int n = 4 ;
    for(int r = 1 ; r <= n ; r++ ){
        for(int sp = r ; sp <n ; sp++){
                cout<<" ";
        }
            for(int c  = 1 ; c <= r ; ++c ){
                cout<<"* ";/*- is important to give space between the stars */
            }
            cout<<"\n";
    }
    int b  = 3;
    for(int r = b ; r >= 1 ; r--){
        for(int sp = r ; sp < b ;sp ++){
            cout<<" " ;
        }
        for(int c  = r ; c >= 1 ; c-- ){
            cout<<" *" ;
        }
        cout<<"\n";
    }

}
