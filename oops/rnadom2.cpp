#include<iostream>
using namespace std ;
class name{
    public:void fac(int a){
        for(int i = a-1 ; i >= 1 ; i--){
            a=i*a;

        }
          cout<<a;

    }
};
int main(){
    int n;
    cout<<"enter the number for finding the fac";
    cin>>n;
    name m;
    m.fac(n);


}
