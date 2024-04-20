#include<iostream>
using namespace std;
int main(){
    int n ;
    int t ;
    int f = 0;
    cout<<"enter any number \n";
    cin>>n;
    t =n;
    while(t>0){
        if(n%t==0){
                f=1;
                f++;
        break;

        }
        t--;
    }

        if(f==2){
                cout<<"prime number";
        }
        else{
            cout<<"not a prime number";
        }

}
