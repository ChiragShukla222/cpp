#include<iostream>
using namespace std ;
int main(){
    int s;
    cout<<"enter the salary :";
    cin>>s;
    int hra ;
    int da;
    if(s<=10000){
        hra = s*20/100;
        cout<<"HRA IS :"<<hra;
        da = s*80/100;
        cout<<"DA is :"<<da;
    }
    else if(s>10000&&s<=20000){
        hra = s*25/100;
        cout<<"Hra is : "<<hra;
        da = s*90/100;
        cout<<"Da is : "<<da;
    }
    else if(s>20000){
        hra= s*30/100;
         cout<<"Hra is : "<<hra;
         da = s*95/100;
         cout<<"Da is : "<<da;
    }

}
