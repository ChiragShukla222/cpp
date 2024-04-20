#include<iostream>
using namespace std;
int main(){
    int a , b ,c ;
    cout<<"enter the a and b";
    cin>>a>>b;
    cout<<"enter what you want to do /n";
    cout<<"1 for largest , 2 for swap";
    cin>>c;
    switch(c){ //here
        //operator deos not wor with case and switch expreeion
        case 1:{ // and here
            if(a>b){
                cout<<"largest="<<a;  //with in the case operator can writen
            }
            else{
                cout<<"largest="<<b;
            }
            break ;

        }
        case 2 :{
            int c ;
            c = a ;
            a = b ;
            b = c ;
            cout<<"after swap value of a ="<<a<<"/n";
            cout<<"after swap value of b = "<<b;
        break;



        }
        default:
            {

                cout<<"invalid choice";
                break;
            }


    }


}
