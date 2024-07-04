#include<iostream>
using namespace std ;
class rbi{
    public:void virtual loan()=0;
    void msg(){
        cout<<"rbi virtual fucntion calling";
    }

};
class sbi:public rbi {
    public:void loan(){
        cout<<"\n sbi loan @ 8%";
    }

};
class axis:public rbi{
        public:void loan(){
        cout<<"\n axis loan @ 9%";
        }
        void display(){
            cout<<"here axis bank was giving the loan";
        }
};

int main(){
    rbi *rb ;
    axis ab;
    sbi sb ;
    rb= &sb;
    ab.display();
    rb->msg();
}
