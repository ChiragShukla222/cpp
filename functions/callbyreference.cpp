#include<iostream>
using namespace std ;
void swaps(int &a , int &b){
    int t ;
    t = a ;
    a = b ;
    b = t ;
}
int main(){
    int x , y ;
    cout<<"enter the two numbers \t";
    cin>>x>>y;
    swaps(x,y);
    cout<<"after swaping x = "<<x<<"\t"<<"after swapping y = "<<y;

}
