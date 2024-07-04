#include<iostream>
using namespace std ;
int m ;

void table(int a){
    for(int i = 1 ; i <= 10 ; i++){
       m =a*i;
        cout<<m<<"\n";
    }

}
int main(){
    int n ;
    cout<<"enter the number :";
    cin>>n;
    table(n);


}
