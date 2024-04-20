#include<iostream>
using namespace std ;
int main() {
    for(int i =1; i <=3 ; i++){
        for(int j = 3; j >= i ; j--){
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }

}
