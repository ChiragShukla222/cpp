#include<iostream>
using namespace std;
int main(){
    int sp ;
    cout<<"enter the selling price ";
    cin>>sp;
    int cp ;
    cout<<"enter the cost price ";
    cin>>cp;
    int pro = sp-cp;
    int los=cp-sp;
    if(pro>los){
        cout<<"profit is : "<<pro;
    }
    else{
        cout<<"loss is :"<<los;
    }

}
