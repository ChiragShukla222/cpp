#include<iostream>
using namespace std;
int fibo(int &a){
    int m = 0 ;
    int p = 1 ;
    int k ;
    cout<<m<<"\t"<<p<<"\t" ;
    for(int i = 0; i <a ; i++){
        k = m+p;
        m = p ;
        p = k ;

        cout<<k<<"\t";

    }

}
int main(){
 int n,k ,m=0,p=1;
 cout<<"enter the number for which you want to find the series \ t";
 cin>>n;
 cout<<m<<"\t"<<n<<"\t" ;
 //fibo(n);

 //cout<<k<<"\t";
 fibo(n);



}
