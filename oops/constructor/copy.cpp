#include<iostream>
using namespace std ;
class teacher{
    int rollno;
    string name;
    public:teacher(int n , string m){
        cout<<"parametrized const";
            this->rollno=n;
            this->name=m;
    }
    void display(){
        cout<<"rollno : "<<rollno;
        cout<<"\n name :"<<name;
    }
};
int main(){
    teacher t(12,"chirag");
    teacher t2(t);
    t2.display();
    //t.display();
}
