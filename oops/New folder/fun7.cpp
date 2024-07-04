#include<iostream>
using namespace std;
class del{
    public:void posi(int arr[]){
        int n;
        int len = sizeof(arr)/sizeof(arr[0]);
        cout<<"enter the position to be deleted :";
        cin>>n;
        int pos ;
        cout<<"og array is :";
        for(int i =0 ; i  <6 ; i++){
            cout<<arr[i]<<"\t";

        }
        for(int i = n ; i < len-1 ;i++){
                arr[i] =arr[i+1];

        }
        cout<<"\n after deleting element :";
        for(int i = 0 ; i <  6 ; i++){
            cout<<arr[i]<<"\t";
        }

    }
};
int main(){
    int lrr[6]={5,6,8,2,9,6};
    del m;
    m.posi(lrr);
}
