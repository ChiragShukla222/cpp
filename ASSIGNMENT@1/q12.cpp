#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the month number : ";
    cin>>n;
    if(n==1){
        cout<<"jan : 31";//sep april june nov
    }
    else if(n==2){
        cout<<"feb :28 or 30";
    }
    else if(n==3){
        cout<<"march : 31";
    }
    else if(n==4){
        cout<<"april : 30";

    }
    else if(n==5){
        cout<<"may : 31";
    }
    else if(n==6){
        cout<<"june : 30";
    }
    else if(n==7){
        cout<<"july : 31";
    }
    else if(n==8){
        cout<<"aug : 31";
    }
    else if(n==9){
        cout<<"sep :30";
    }
    else if(n==10){
        cout<<"oct : 31";
    }
    else if(n==11){
        cout<<"nov : 30";
    }
    else if(n==12){
        cout<<"dec : 31";
    }
    else {
        cout<<"enter a valid month num ";
    }



}
