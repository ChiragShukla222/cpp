/*
b a b
a b a
b a b
*/
#include<iostream>
using namespace std;
int main(){
    char f = 'a';
    for(char i = 'a' ; i <= 'c' ; i++){
        for(int j = 'a' ; j <= 'c' ; j++){
            if(f=='a'){
                f++;
            }
            else if(f=='b'){
                f--;
            }
            cout<<f<<"\t";
        }
        cout<<"\n";
    }

}
