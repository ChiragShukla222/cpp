#include<iostream>
using namespace std ;
class teacher{
        int roll;
        string name;
    public:teacher(int n , string m){

            this->roll=n;
            this->name=m;

    }

    teacher(teacher &obj){
        cout<<"userdefine copy consttrucot";
        this->roll=obj.roll;
        this->name=obj.name;

    }
    void display(){
        cout<<"roll-no"<<roll;
        cout<<"\n name:"<<name;
    }



};
int main(){
    teacher t(11,"chirag");
    teacher t1(t);
    t1.display();

}
