#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e;
cout<<"enter the three digit number";
cin>>a;//321
b=a/100;//3
c=a%100;//21
d=c/10;//2
e=c%10;//1
cout<<"the sum is:" <<b+d+e;

}
