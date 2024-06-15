#include<iostream>
using namespace std ;
int main(){
    int u,m,p;
    cout<<"enter the units for bill genration :";
    cin>>u;
    if(u<=50){
       m=u*0.50;
       cout<<"bill is : "<<m;
       p = u*20/100;
       cout<<"surcharge :"<<p+m;
    }
    else if(u>50&&u<=150){
        m=u*0.75;
        cout<<"bill is : "<<m;
       p = u*20/100;
       cout<<"surcharge :"<<p+m;
    }
    else if(u>150&&u<=250){
        m=u*1.20;
        cout<<"bill is : "<<m;
       p = u*20/100;
       cout<<"surcharge :"<<p+m;
    }
    else if(u>250){
        m=u*1.50;
        cout<<"bill is "<<m;

       p = u*20/100;
       cout<<"surcharge :"<<p+m;
    }






}
