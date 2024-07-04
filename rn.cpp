#include<iostream>
using namespace std ;

int odd(int &a[5]){
    for(int i = 0 ; i < len ; i++){
        if(a[i]%2!=0){
            return 1;
        }
        else{
            return 0 ;
        }
    }
}
int main(){
    int brr[5] = {1,2,3,4,5};
    int len = sizeof(brr)/sizeof(brr[0]);



}
