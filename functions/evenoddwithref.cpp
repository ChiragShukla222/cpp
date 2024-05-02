#include<iostream>
using namespace std ;
int eve(int &a  ){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int b ;
    cout<<"enter the number";
    cin>>b ;
    if(eve(b)==1){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }



}
