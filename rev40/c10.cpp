#include<iostream>
using namespace std ;
int main(){
    int n = 223 ;
    int last = n %10;
    int first , m;
    while(n>0){
        first = n%10 ;
            n=n/10;
    }
    cout<<"first and last digit are"<<first<<"\n"<<last;


}
