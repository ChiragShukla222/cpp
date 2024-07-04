#include<iostream>
using namespace std ;
class chirag;//one class has to be declared and not initialized
class shukla{
    int marks ;
    public : void res(int m){//public casue yeh main me obj se call hota hai
        marks=m;
    }
    friend void result(chirag,shukla);

};
class chirag{
int marks;
    public:void res(int m){
    marks= m;
    }
    friend void result(chirag,shukla);
};
void result(chirag cs,shukla sc){
    if(cs.marks>sc.marks){
        cout<<"cs got highest numbr";
    }
    else{
        cout<<"sc got the lower";
    }
}
int main(){
    chirag c;
    c.res(100);
    shukla m;
    m.res(80);
}
