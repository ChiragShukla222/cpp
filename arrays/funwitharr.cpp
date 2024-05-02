#include<iostream>
using namespace std ;

int arrfun(int a[5]){
 int len = sizeof(a)/sizeof(a[0]);
    for(int i = 0 ; i < len ; i++ ){

        a[i]= a[i]*a[i];
          return a[i];
    }
}
int main(){
int a[5] ;
cout<<"enter the number";
cin>>a[5];
cout<<arrfun(a[5]);

}

