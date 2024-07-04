#include<iostream>
using namespace std ;
int main(){
try{
    int a , b ;
    cout<<"enter the a \n";
    cin>>a;
    cout<<"enter the b \n";
    cin>>b;
    if(b==0){
        throw b ;
    }
    cout<<a/b;
}

    catch (...){
    cout<<"there is a system problem";
    }

}
