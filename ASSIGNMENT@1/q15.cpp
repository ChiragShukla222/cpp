#include<iostream>
using namespace std;
int main(){
    int a ,b,c ;
    cout<<"enter the three sides of the triangle"<<"\n";
    cin>>a>>b>>c;
    if(a==b&&b==c&&c==a){
        cout<<"eqilateral triangle";
    }
    else if(a==b||b==c||a==c){
        cout<<"Isosceles trianlge";
    }
    else if(a+b>=c||b+c>=a||a+c>=b){
        cout<<"valid triangle";
    }


}
