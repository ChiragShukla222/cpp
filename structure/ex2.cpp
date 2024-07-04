#include<iostream>
using namespace std ;
struct invertrate{
    int age;
    char name ;
    int pass;
}in;
int main(){
    cout<<"enter the age \n";
    cin>>in.age;


    if(in.age>=18){
          cout<<"enter the name \n";
            cin>>in.name;
            if(in.name!=NULL){
                cout<<"welcome user \n";

            }
            else if(in.pass>0||in.pass<=10){
                cout<<"password is followed by the pattern";
            }
    }
    else{
        cout<<"not eligible for registering";
    }
}
