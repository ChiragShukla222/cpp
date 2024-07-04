#include<iostream>
using namespace std ;
void lcm (int &a , int &b){
    int high = a>b?a:b;
    while(1){
        if(high%a==0 && high%b==0){
            cout<<"lcm \n"<<high;
            break;
        }
        high++;

    }

}
int main(){
     int q , p ;
     cout<<"enter two numbers";
     cin>>q>>p;
     lcm(q,p);
}
