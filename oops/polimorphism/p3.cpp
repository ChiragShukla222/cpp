#include<iostream>
using namespace std ;
class rbi{
    public:void virtual fun();
    void msg(){
            cout<<"hello rbi \n";
    }
};
class sbi:public rbi {
    public:void fun(){
        cout<<" obj in the sbi with the re of vf";
    }

};
class axis:public rbi{
    public:void show(){
        cout<<"again same but the function is different";
    }
};
int main(){
    rbi *rb;
    sbi bi;
    rb = &bi;
    rb->fun();

}
