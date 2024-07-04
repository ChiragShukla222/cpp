#include<iostream>
using namespace std ;
int main(){
    int a = 9;
    int *e1  =&a;
    int **h = &e1 ;
    cout<<**h<<"\n";
    cout<<*h;


}
