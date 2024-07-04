#include<iostream>
using namespace std ;
class total{
    public:void even(int arr[]){
        int flag = 0 ;
        for(int i = 0 ; i < 5 ;i++){
            if(arr[i]%2==0){
                cout<<arr[i]<<"\t";
                flag++;
            }
        }
        cout<<"\n even number are:"<<flag;

    }
};
int main(){
    int k[5] = {5,2,4,9,6};
   // int len = sizeof(arr)/sizeof(arr[0]);
    total t;
    t.even(k);
    }
