#include<iostream>
using namespace std ;
int main () {
    int p , c , m ;
    int per ;
    int total ;
    cout<<"enter the marks of Physics : \t";
    cin>>p ;
    cout<<"enter the marks of Maths : \t";
    cin>>m;
    cout<<"enter the marks of Chemistry : \t";
    cin>>c;
    total =p +c + m;
    cout<<"Total ="<<total<<"\n";
    per = (total/ 3) ;                        //p+c+m /3 = wrong answer;//
    cout<<"percentage ="<<per<<"%"<<"\n";
    if(per>=60){
        cout<<"1st divison Congrats";
    }
    else if(per>=50&&per<=59){
        cout<<"2nd divison good";
    }
    else if(per>=35&&per<=49){
        cout<<"3rd divison pass";
    }
    else{
        cout<<"Try again this year";
    }

}
