#include<iostream>
using namespace std ;
void arrr(int *j,int s){//without pointer void arr(int at[5]) s to get the size of array when pointer is given
    int m = INT_MIN;
    for(int i = 0 ; i <5 ;i++){
        if(m<j[i]){
            m=j[i];
        }
    }
    cout<<"large vale"<<m;
}
int main(){
    int a[5] = {1,5,6,9,44};
    arrr(a,5);//5 is size of array
}
