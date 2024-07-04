#include<iostream>
using namespace std ;
class copyp{
    public:void ele(int arr[]){
        cout<<"og array is :\n";
        for(int i = 0 ; i < 5 ;i++){
            cout<<arr[i]<<"\t";
        }
        int krr[5];
        cout<<"\n copy arr is:"<<"\n";
        for(int i = 0 ; i < 5 ; i++){
            krr[i]=arr[i];
            cout<<krr[i]<<"\t";
        }
    }
};
int main(){
    int brr[5]={56,5,4,6,8};
    copyp p ;
    p.ele(brr);
}
