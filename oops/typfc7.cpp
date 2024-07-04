
#include<iostream>
using namespace std ;
class op{
    int a ;//global
    public:void get(int a){
        this->a=a;//assign value of int a of function to global int a of class
    }
    void cyb(){
        cout<<"a="<<a;
    }
};
class bot{

};
int main(){
    op p ;
    p.get(30);
    p.cyb();
}
