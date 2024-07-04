#include<iostream>
using namespace std ;
class top{
    public:void um(){
    cout<<"umm";
    }
};
class m {
    public:void kl(){
        top m ;
        cout<<"kl function \n";
        m.um();
    }
};
int main(){
 m l ;
 l.kl();
}
