#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the number";
    cin>>n;
    int temp;
    cout<<"factors are :"<<"\n";
    for(int i = 1 ; i <=n ; i++){
        if(n%i==0){
            temp = i ;
            cout<<temp<<"\n";
        }

    }
}
