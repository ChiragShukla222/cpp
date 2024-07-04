#include<iostream>
using namespace std ;
void pan(int &p){
    int m = 0 ;
    int n = 1 ;
    int k ;
    cout<<"series is "<<"\n";
    cout<<m<<"\t"<<n<<"\t";
    for(int i = 1 ; i <= p ; i++){
        k = m + n ;
        m = n ;
        n = k ;

        cout<<k<<"\t";
    }
}
int main(){
    int a ;
    cout<<"enter the number till which you wnat to find the series"<<"\t";
    cin>>a;
    pan(a);

}
