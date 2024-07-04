#include<iostream>
using namespace std ;
void hcf(int &a, int &b){
    int low;
    int ans ;
    low = a<b?a:b;
    for(int i = 1 ; i <= low ; i++){
            if(a%i==0 && b%i==0){
                ans= i;
            }
    }
    cout<<ans;
}
int main(){
int q, p ;
cout<<"enter the two values";
cin>>q>>p;
hcf(q,p);

}
