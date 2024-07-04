#include<iostream>
using namespace std ;
class second {
    public:void sec(int arr[]){
        int maxi=INT_MIN;
        cout<<"largest element is :";
        for(int i = 0; i< 5 ; i++){
            if(arr[i]>=maxi){
                maxi=arr[i];
            }

        }
        cout<<maxi;
        cout<<"\n second largest is :";
        int secmax =0;
        for(int j  = 0 ; j < 5 ;j++){
            if(arr[j]<maxi&&arr[j]>secmax){
                secmax=arr[j];
            }
        }
        cout<<secmax;


    }
};
int main(){
    int kt[5]={4,6,8,2,3};
    second s ;
    s.sec(kt);

}
