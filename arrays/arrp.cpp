#include<iostream>
using namespace std;
int main(){
    int b [5] ;

    int len = sizeof(b)/sizeof(b[0]);
    cout<<"enter any 5 number \n";
    for(int i = 0 ; i <len ; i++ ){
        cin>>b[i];
    }
    int m = b[0] ;
    for(int i = 0 ; i < len ; ++i){

            if(m>b[i]){
                m=b[i];
            }


    }
    cout<<"smallest number is :"<<m;



}
