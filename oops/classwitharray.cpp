#include<iostream>
using namespace std;
class high{
    public:void highh(int arr[]){
        int m = INT_MIN;
        int n = INT_MAX;

        for(int i = 0 ; i < 5 ;i++){
            if(m<=arr[i]){
                m=arr[i];
            }

        }
        for(int i = 0; i < 5 ; i++){
            if(arr[i]<=n){
                n =arr[i];
            }
        }
        cout<<"largest element is :"<<m;
        cout<<"\n smallest element is :"<<n;
    }
};
int main(){
    int brr[5]={1,5,80,90,2};
    high l;
    l.highh(brr);

}
