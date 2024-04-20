#include<iostream>
using namespace std;
int main() {
    int n ;
    int t =1 ;
    cout<<"enter any no\n";
    cin>>n;
    table:
        cout<<n*t<<"\n";
        t++;
        if(t<=10){
            goto table;//to give it an constrain or limit write goto inside of if will act as a loop for printing the table
        }

}
