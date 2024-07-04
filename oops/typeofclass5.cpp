#include<iostream>
using namespace std ;
class top {
    public:void oo(int a , int b = 90 ){
        cout<<a+b;
    }
};
int main(){
top b;
b.oo(20);
}
