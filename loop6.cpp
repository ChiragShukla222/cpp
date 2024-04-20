#include<iostream>
using namespace std;
int main(){
     int n ;
     cout<<"enter the number";
     cin>>n;
     do{
        if(n%2==0){ //for odd if(n%2!=0)
            cout<<n<<"\t";
        }
        n--
     }
     while(n>=1);
}
//to print all even
