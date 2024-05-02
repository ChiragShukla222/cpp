#include<iostream>
using namespace std ;
int main() {
        int n = 3 ;

        int a=3;
        int b =4;
        for(int i = n ; i >= 1  ;i--){
            for(int spc = n ; spc > i ; spc--){
                cout<<" ";
            }
            for(int c = 1 ; c<=i ; c++){
                if(i==3){
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
