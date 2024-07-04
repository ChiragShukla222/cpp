#include<iostream>
using namespace std ;
void hcg(int &a, int &b){
    int high = a>b?a:b;
    for(int i ; ; i++){
        if(high%a==0&&high%b==0){
            cout<<"lcm is :"<<high;
            break;
        }
    }

}
int main(){
    int m , n;
    cout<<"enter the first number";
    cin>>m;
    cout<<"enter the second number";
    cin>>n;
    hcg(m,n);
}
