#include<iostream>
using namespace std ;
class farjee{
    /*public:farjee(){
        cout<<"hey this is an const";
    }*/
    public:
        farjee(int &a,int &b){
        cout<<" vlaues of a "<<a;

        cout<<" vlaues of b"<<b;
        cout<<"const called automatically ";

    }
};
int main(){
    int x,y;
    cout<<"enter the vlaue of x"<<"\n";
    cin>>x;
    cout<<"enter the vlaue of y"<<"\n";
    cin>>y;
    farjee(x,y);
    //f1.input(x,y);
}
