#include<iostream>
using namespace std;
int main(){
    int n = 123 ;
    int last = n%10;
    int first;
    while(n>0){

        first = n %10;
        n=n/10;

    }
    cout<<first<<"\t"<<last;
    int c ;
    c =  first
    first =last ;
    last = c ;
    cout<<"\n after swapping first is"<<first<<"last is"<<last;
}
