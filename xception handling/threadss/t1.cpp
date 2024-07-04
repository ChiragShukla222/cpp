#include<iostream>
using namespace std ;
#include<thread>
void even(int s  ,int e){
    for(s;s<=e;s++){
            if(s%2==0){
        cout<<"even"<<s<<"\t";
        }
    }
}
void odd(int s  , int e ){
    for(s;s<=e;s++){
        if(s%2!=0){
            cout<<"odd"<<s<<"\t";
        }
    }
}
int main(){
        thread t1(even,1,1000);
        thread t2(odd,1,1000);

        t1.join();
        t2.join();
           if(t2.joinable()){
            t2.join;
           }
        cout<<"\n done";
}
