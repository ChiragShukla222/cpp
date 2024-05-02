#include<iostream>
using namespace std ;
int prime(int &a){
    int b = a-1;
    int flag ;
    while(b>=1){
        if(a%b==0){
            flag++;
        }
        b--;
    }
    if(flag==2){
        return 1 ;
    }
    else{
        return 0;
    }
}
int main(){
    int c ;
    cout<<"enter number";
    cin>>c;
    prime(c);
    if(prime(c)==1){
        cout<<" not prime ";
    }
    else{
        cout<<"prime";
    }

}
