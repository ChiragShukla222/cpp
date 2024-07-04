#include<iostream>
using namespace std ;
class top {
    public:void sum(float k , float p ){
        cout<<"flaot result ="<<k+p<<"\n";
    }
    void sum(int m , int l ){
    cout<<"integer result:0"<<m+l
    }


};
int main(){
top m ;
m.sum(float(24.90),float(65.23));
m.sum(4,5);
//this is function over loading whith differnt parameter
//in this case the ambigutiy arises to remove it typecasting is done
}
