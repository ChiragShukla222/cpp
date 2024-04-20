#include<iostream>
using namespace std ;
int main(){
int a = 12;
cout<<a++;
cout<<a;//for post increment
int b = 20 ;
b++;
cout<<b;
int a = 30 ;
cout<<++a<<"\n";//31
cout<<a++<<"\n";//31
cout<<a;//32
}
