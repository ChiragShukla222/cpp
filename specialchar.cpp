//scope to acess global variable
#include<iostream>
using namespace std;
int a =100;
int main(){
int a = 20;
cout<<::a<<"\n";
//to check the address of global variable//
cout<<&::a;

}
