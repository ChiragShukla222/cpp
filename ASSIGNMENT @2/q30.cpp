#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the number :";
    cin>>n;
    int flag;
    for(int i = 1 ; i<n ;i++){
        if(n%i==0){
            flag = i;

        }
    }
    cout<<"perfect number"<<flag+flag;


}
