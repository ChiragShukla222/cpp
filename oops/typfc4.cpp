//function overloading
#include<iostream>
using namespace std ;
class over{
    public:void sum(){
    cout<<"im with out para meter \n";
    }
    public:void sum(int a , int b ){
    cout<<"im with para meter";
    cout<<a+b;
    }
};
int main(){
    over m ;
    m.sum();
    m.sum(4,5);
}
