#include<iostream>
using namespace std ;
class uniquep{
    public:void uin(int arr[]){
        int flag =0;
        cout<<"og array is :";
        for(int i = 0 ; i < 10 ; i++){
            cout<<arr[i]<<"\t";
        }
        cout<<"\n duplicate elements  are:";
        for(int i = 0 ; i < 10 ; i++){
            if(arr[i]==arr[i+1]){
                    flag++;
                cout<<arr[i]<<"\t";
            }
        }
        cout<<"\n total duplicate elements are :"<<flag;

    }

};
int main(){
    int brr[10]={1,2,3,4,4,5,6,6,7,8};
    uniquep l ;
    l.uin(brr);
}
