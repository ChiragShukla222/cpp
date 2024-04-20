#include<iostream>
using namespace std ;
int main(){
    int a , b , c ;
    cout<<"enter number";
    cin>>a;
    cout<<"press 1 for even and odd"<<"\n"<<"press 2 for table";
    cin>>c;
    switch(c){
        case 1 :{
            if(a%2==0){
                cout<<"even number";
            }
            else{
                cout<<"odd number";
            }
            break ;
        }
        case 2 :{
            for(int i = 1 ; i<=10 ;i++){
                cout<<a*i<<"\t";
            }
            break ;
        }


    }
}
