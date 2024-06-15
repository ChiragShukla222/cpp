#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    int mark;
    cout<<"enter the marks of five subjects"<<"\n";
    cin>>a>>b>>c>>d>>e;
    mark = a+b+c+d+e;
    cout<<"sum is:"<<mark<<"\n";
    int m = mark/500;
    float per;
    per = m*100;
    //cout<<"percentage is :"<<per<<"\n";
    if(per>=90&&per<=100){
        cout<<per<<": Grade A";
    }
    else if(per>=80&&per<90){
        cout<<per<<": Grade B";
    }
    else if(per>=70&&per<=80){
        cout<<per<<": Grade C";
    }
    else if(per>=60&&per<=70){
        cout<<per<<": Grade D";
    }
    else if(per>=40&&per<=60){
        cout<<per<<": Grade E";
    }
    else{
        cout<<per<<": Grade F";
    }




}
