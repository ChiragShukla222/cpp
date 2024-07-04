#include<iostream>
using namespace std;
int main(){
    int a =0;
    for(int i =1 ; i <= 3;i++){
        for(int j = 1 ; j<=i ; j++){
            a++;
            cout<<a<<"\t";
        }
        cout<<"\n";
    }


}
