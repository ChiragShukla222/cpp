#include<iostream>
using namespace std ;
int main(){
    int    a[6] = {1,89,78,6,8,7};
    int tem;
    int len = sizeof(a)/sizeof(a[0]);
    cout<<"before sorting \n ";
    for(int i = 0 ; i < len  ; i++){
        cout<<a[i]<<"\t";
    }
    for(int i = 0 ; i < len  ; i++){
        for(int j = 0 ; j <len-i-1 ;j++){
            if(a[j]>a[j+1]){
                    tem = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tem;
            }


        }

    }
    cout<<" \n after swapping \n";
    for(int j = 0 ; j < len ; j++){
        cout<<a[j]<<"\t";
    }





}
