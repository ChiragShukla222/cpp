#include<iostream>
using namespace std;
int main(){
    int n ;
    int c ;
    cout<<"enter any number \t";
    cin>>n;
    c =n -1 ;//to decrease the n  for multiplying it agian //
    do{
        n = c*n ;
        c--;
    }
    while(c>=1);
    cout<<n;

}
