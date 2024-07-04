#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the number ";
    cin>>n;
    int flg ;
    for(int i = 1 ; i < n ; i++ ){
            if(n%i==0){
            flg = i;
            cout<<flg<<"\n";

            }

    }
    cout<<"perfect num  is "<<flg+flg;


}
