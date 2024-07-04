#include<iostream>
using namespace std ;
class tab{
    public:void table(int a ){
        for(int i = 1 ; i <= 10 ; i++){
            cout<<i*a<<"\n";
        }
    }
};
int main(){
    int m;
    cout<<"enter the value for which you want to create table";
    cin>>m;
    tab l ;
    l.table(m);
}
