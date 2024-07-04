#include<iostream>
using namespace std ;
void hcf(int q , int p){
    int ans;
    int low = q<p?q:p;
    for(int i = 1 ; i < low ; i++){
            if(q%i==0&&p%i==0){
                ans = i ;
                cout<<ans;
            }
    }

}
int main() {
    int a ,b ;
    cout<<"enter any two numbers";
    cin>>a>>b;
    hcf(a,b);


}
