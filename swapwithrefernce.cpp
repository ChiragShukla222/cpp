#include<iostream>
using namespace std ;
void swapp(int &a , int &b){
    int c ;
    c = a ;
    a = b ;
    b = c;
}
int main(){
    int e , f ;
    cout<<"enter the two numbers";
    cin>>e>>f;
    swapp(e,f);
    cout<<"after swapping"<<e<<"\t"<<f;




}
