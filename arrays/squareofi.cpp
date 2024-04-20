#include<iostream>
using namespace std ;
int main() {
    int squ[5];
    int len = sizeof(squ)/sizeof(squ[0]);
    cout<<"enter the five numbers to find square of each \n";
    for(int i = 0 ; i < len ; ++i){
        cin>>squ[i];
    }
    for(int i = 0 ; i < len ; ++i){
            cout<<"square is : "<<squ[i]*squ[i]<<"\n";
    }



}
