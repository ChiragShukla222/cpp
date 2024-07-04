#include<iostream>
using namespace std ;//multiple inhertance
class a{
    public:void meradost1(){
        cout<<"meet ravi ";
    }
};
class b{
    public:void meradost2(){
        cout<<"meet rahul";
    }
};
class c:public a , public b //which inherits the a and b and is common link btw the to interact//
    {
        public:void thirdp(){
            cout<<"now you all are connected with me"<<"\n";
        }
    };
int main(){
    c obj;
    obj.thirdp();
    obj.meradost2();
    obj.meradost1();
}
