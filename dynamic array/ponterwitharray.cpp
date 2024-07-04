#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,36,52,4,56,8};
    int *p = arr;
    p = p+2;
    cout<<*p<<"\n";
}

