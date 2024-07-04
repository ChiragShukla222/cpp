#include<iostream>
using namespace std ;
class prime{
    public:void pri(int n){
        int flag = 0 ;
        for(int i = 1 ; i <=n ; i++){
            if(n%i==0){
                flag++;
            }
        }
        if(flag==2){
            cout<<"prime number :"<<n;
        }
        else{
            cout<<"not an prime number : "<<n;
        }
    }
};
int main(){
    int m ;
    cout<<"enter the number you want to check :";
    cin>>m;
    prime p ;
    p.pri(m);
}
