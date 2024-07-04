#include<iostream>
using namespace std ;
void lcm(int &a , int &b){
    int high = a>b?a:b;
    for(;;high++){
        if(high%a==0 && high%b==0){
            cout<<"lcm  is ="<<high;
            break;
            //high++;
        }
    }

}
int main(){
    int q , p ;
    cout<<"enter the two numbers";
    cin>>q>>p;
    lcm(q,p);


}
