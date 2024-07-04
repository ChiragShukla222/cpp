#include<iostream>
using namespace std ;
struct userdefine{
    char name ;
    float salary ;
};
int main(){
    struct userdefine e ;// e is variable for the userdefine and is required to me made every time when the struct is being called
    cout<<"enter the name \n";
    cin>>e.name;//for calling specificly name;
    cout<<"salary \n";
    cin>>e.salary;
    cout<<"name is"<<e.name<<"\n";
    cout<<"salary is : "<<e.salary;

}
