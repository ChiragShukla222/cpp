#include<iostream>
using namespace  std ;
class student{
    int a , b;
    public:student(int a ,int b){
        cout<<a<<"\n";
        cout<<b<<"\n";
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"this a"<<a;
        cout<<"this b"<<b;
    }



};
int main(){
    student s(4,5);

    s.display();



}
