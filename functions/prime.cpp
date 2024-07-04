#include<iostream>
using namespace std ;
 int flag = 0 ;
int prime(int &p){
    for(int i = p-1 ; i>=1;i-- ){
        if(p%i==0){
            flag++;
        }
    }
    if(flag==2){
        return 1 ;
    }
    else{
        return 0;
    }
}
int main(){
    int a ;
    cout<<"enter the number ";
    cin>>a;
    prime(a);
    if(prime(a)==1){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }

}
