#include<iostream>
using namespace std;
int main(){
    int low , high ;
    int a , b ;
    cout<<"enter the number for hcf \n";
    cin>>a;
    cout<<"enter the nubmer for hcf";
    cin>>b;
    low = a<b?a:b;
    for(int i = 1 ; i < low ; i++){
            if(a%i==0&&b%i==0){
                high = i;


            }
    }
    cout<<high;


}
