#include<iostream>
using namespace std;
class neg{
    public:void arr(int arr[]){
        int k;
        cout<<"negative elements are:";
        for(int i = 0  ; i < 6 ; i++){
            if(arr[i]<0){
              k = arr[i];
              cout<<"\n"<<k;
            }

        }

    }
};
int main(){
    int brr[6]={1,6,2,-10,5,-12};
    neg l ;
    l.arr(brr);
}
