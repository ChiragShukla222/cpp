#include<iostream>
using namespace std ;
int main() {
    int p [5] ;
    int flag = 0 ;
    cout<<"enter the five numbers \n";
    int len = sizeof(p)/sizeof(p[0]);
    int a, c  ,k;
    for(int i = 0 ; i < len  ; i++){
        cin>>p[i];
    }
    for(int i = 0 ; i < len ; i++){
    c = 0 ;
    a = p[i];
    k = a ;
    while(a>=1){
        if(p[i]%a==0){
            c++;
        }
        a--;
    }
    if(c==2){
        cout<<k<<"\t";
    }
    cout<<"\n";
}
}


