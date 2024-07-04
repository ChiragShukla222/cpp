#include<iostream>
using namespace std ;
class task{
    public:void even(int a){
        if(a%2==0){
            cout<<"even";
        }
        else{
            cout<<"odd";
        }
    }

};
int main(){
    int m;
    cout<<"enter the number to check";
    cin>>m;
    task o ;
    o.even(m);
}
