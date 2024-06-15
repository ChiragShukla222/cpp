#include<iostream>
using namespace std ;
int main(){
    int n,m,o ;
    cout<<"enter the three anlges :"<<"\n";
    cin>>n>>m>>o;
    int sum = n+m+o;
    if(sum==180){
        cout<<"valid trianlge";
    }
    else {
        cout<<"invalid";
    }
}
