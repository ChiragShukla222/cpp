#include<iostream>
using namespace std ;
/*
with arguments
*/
int c ;
void show (){
    cout<<"sum is "<<c ;
}
void sum(int a , int b ){
     c = a + b ;
}
int main(){
    sum(9,7);
    show();


}
