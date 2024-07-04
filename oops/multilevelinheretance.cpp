#include<iostream>
using namespace std ;
class tenth{
public:void result10(){
    cout<<"result of 10th = 80%"<<"\n";
}
};
class twelth:public tenth{
public:void result12(){
    cout<<"result of 12th is 90%"<<"\n";
    }
};
class grad:public twelth{
    public:void resultgrad(){
        cout<<"grad is 95%"<<"\n";
    }
};

int main(){
grad h ;
h.resultgrad();
h.result12();
h.result10();
}
