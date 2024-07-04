#include<iostream>
using namespace std ;
class rbi {
    public:virtual void msg(){
        cout<<"rbi \n";
    }
};
class sbi:public rbi {
    public:void msg(){//virtual function keep the name of virtaul fucntion same to acc to other fucntion

    cout<<"sbi\n";
    }
};
class axis:public rbi{
    public:void msg(){
    cout<<"axis bank here \n";
    }
    void show(){
        cout<<"axis bank normal function";
    }
};
int main(){
    rbi *rb;
    rbi nrb ;
    sbi sb;
    axis as ;
    rb = &as ;//giving addrss of axis bank than refering to this msg function has to be called
    rb->msg();//definig the pointer to the msg
    as.show();//show is a normal obj so ti has
    //to be called with the class obj can tbe acces with the pointer obj

}
