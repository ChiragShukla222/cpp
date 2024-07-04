#include<iostream>
using namespace std ;
int main (){
    int a , b ;
    cout<<"enter two numbers"<<"\n";
    cin>>a>>b;
    int value = a>b?a:b;
    for(;;value++){
        if(value%a==0&&value%b==0){
            cout<<"LCM IS :"<<value;
            break;
        }
    }


}
