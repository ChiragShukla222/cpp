#include<iostream>
using namespace  std ;
int main(){
    int a , b ,c ;
    cout<<"enter two numbers a nd b";
    cin>>a>>b;
    cout<<"enter your choice /n 1 for addition /n 2 for multipication /n ";
    cin>>c;
    switch (c){
        case 1: {
            cout<<"resutl="<<a+b;
            break;
            }
     case 2:
         {
     cout<<"result2="<<a*b;
     break;
        }
     default :{
     cout<<"invalid option";
        }
    }
}
