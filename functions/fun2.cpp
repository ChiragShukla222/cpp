#include<iostream>
using namespace std ;
int k ;
int area(int l , int b){
     k = l*b;
    return k ;
}

int main(){
    int a , b ;
    cout<<"enter the length and breadth ";
    cin>>a>>b;
    area(a,b);
    cout<<k;

}
