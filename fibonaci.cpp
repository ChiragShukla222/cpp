#include<iostream>
using namespace std ;
int main(){
    int l  ;
    cout<<"enter the number for series \t";
    cin>>l;
    int m = 0 ;
    int n = 1 ;
    int k;
    cout<<m<<"\t"<<n<<"\t";
    for(int i = 1 ; i < l ; i++){
        k = m+n;//0+1=1
        m = n ;//m=1
        n = k;
        cout<<k<<"\t";
    }


}
