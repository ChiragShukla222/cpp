#include<iostream>
using namespace std ;
int main(){
    int l ;
     cout<<"enter the number for which you want to create the series \t";
    cin>>l;
    int m = 0 ;
    int n = 1 ;
    cout<<m<<"\t";
    cout<<n<<"\t";
    int k ;
    for(int i = 2 ; i < l ; i ++){

            k = m+n;
            m = n ;
            n= k ;
            cout<<k<<"\t";



    }





}
