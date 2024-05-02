#include<iostream>
using namespace std ;
int big(int &a ,int &b){
        if(a>=b){
        return  a;
    }
    else{
        return  b;
    }

}
int main(){
    int x , y ;
    cout<<"two nubmers";
    cin>>x>>y;
    big(x,y);
    cout<<big(x,y)<<"is the largest value";





}
