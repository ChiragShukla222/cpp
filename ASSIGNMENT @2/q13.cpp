#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the number : ";
    cin>>n;
    int last ;
    last = n%10;
    int first;
    while(n>0){
        first= n%10;
        n=n/10;
    }
    cout<<"before swapping : "<<first<<"\t"<<last<<"\n";
    int c;
    int a =  first;
    int b = last;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping : "<<"\t"<<a<<"\t"<<b;


}
