//wap to
#include<iostream>
using namespace std;
int  main(){
    int r ;
    cout<<"enter the reading \n";
    cin>>r;
    if(r >0)
    {
            cout<<"valid " ;
            if(r>=1 && r <=100){
                r = r*5;
                cout<<"monthly bill is ="<<r;
            }
                else if(r >=101 && r<=500){
                r = r * 7 ;
                cout<<"monthly bill is "<<r;
            }
                else if (r >=501 && r <= 1000){
                r = r * 9;
            }
                else if(r>=1000){
                r = r * 15 ;
                cout<<"monthly bill is"<<r;
            }

    }
    else{
            cout<<"invalid negative is not allowed";
        }



}
