#include<iostream>
using namespace std ;
class maxmin{
    public:void maxi(int arr[]){
        int m = INT_MIN;
        cout<<"largest number is :";
        for(int i = 0; i < 5 ; i++){
            if(m<=arr[i]){
                m=arr[i];
            }
        }
        cout<<m;
    }

    void mini(int nrr[]){
        int n = INT_MAX;
        cout<<"\n minimun number is :";
        for(int i =0 ; i <5 ;i++){
            if(n>=nrr[i]){
                n=nrr[i];
            }
        }
        cout<<n;

    }

};
int main(){
    int brr[5] = {1,2,3,55,0};
    maxmin p ;
    p.maxi(brr);
    p.mini(brr);
}

