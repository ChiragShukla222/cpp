#include<iostream>
using namespace std ;
    void lafi(int &a){
        int last = a%10;     //123  mod = 3 123/10 =12 <<fisrt = 12 > 0 12/10 = 1>0 1/10=0
        int first;
        while(a>0){
            first = a%10;
            a=a/10;
        }
        cout<<first+last;
    }

int main(){
    int a;
    cout<<"enter number"<<"\t";
    cin>>a;
    lafi(a);
}
