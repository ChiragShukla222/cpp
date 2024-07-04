#include<iostream>
using namespace std ;
class a {
    public:a(){
        cout<<"a cons"<<"\n";
    }
    ~a(){
        cout<<"a des"<<"\n";
    }
};
class b {
    public:b(){
        cout<<"b cons"<<"\n";
    };
    ~b(){
        cout<<"b des"<<"\n";
    }

};
class c:public a ,public b{
    public:c(){
    cout<<"cosnt of c"<<"\n";
    }
  ~c(){
  cout<<"des of c"<<"\n";
  }
};
int main(){
c obj;

}





