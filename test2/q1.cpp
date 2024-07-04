#include<iostream>
using namespace std ;
void mazmin(int &a , int &b){
    if(a>=b){
        cout<<"a is greatest";
    }
    else{
        cout<<"b is greatest";
    }
}
int main() {
    int c,d ;
    cout<<"enter the number";
    cin>>c>>d;
    mazmin(c,d);

}
