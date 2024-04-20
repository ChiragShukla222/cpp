#include<iostream>
using namespace std ;
int main(){
    char c[5];
    cout<<"enter name in toggle form of size 4 \n";
    cin>>c ;
    for(int i =0 ; c[i] !=NULL ; i++)
        {
        if(c[i]>=65&&c[i]<=90)
            {
            c[i] = c[i]+32;

    }
        else if(c[i]>=97&&c[i]<=122)
            {
        c[i] = c[i]-32;
            }
        }
        cout<<c;


}
