//two parameter to pass array in fucntion one for data one is for size
#include<iostream>
using namespace std ;
void fun(int j[] , int k){
    int m = INT_MIN;
    for(int i =0 ; i < k ; i++){
        if(m<j[i]){
            m= j[i];
        }
    }
    cout<<"large numb"<<m;
}
int main(){
int aa[5]= {1,5,6,2,3};
fun(aa,5);
}
