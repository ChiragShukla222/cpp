#include<iostream>
using namespace std;
int main(){
    float ten , tw ;
    cout<<"enter the tenth %";
    cin>>ten;
    if(ten>=85){
        cout<<"enter the 12th %";
        cin>>tw;
        if(tw>=65){
            cout<<"eligible for clerk";
        }
        else{
            cout<<"elg for peon";
        }
    }
    else{
        cout<<"not eligible for further process";
    }
}
