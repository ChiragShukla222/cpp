#include<iostream>
using namespace std ;
int even(int &a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0 ;
    }

}
int main(){
    int b ;
    cout<<"enter any number";
    cin>>b;
    even(b);
    if(even(b)==1){
        cout<<"even";

    }
    else{
        cout<<"odd";
    }


}

