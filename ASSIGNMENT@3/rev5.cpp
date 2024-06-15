#include<iostream>
using namespace std ;
int main(){
    int arr[6] = {4,11,9,5,3,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    int flag=0,odd=0 ;
    for(int i = 0 ; i < len ;i++){
        if(arr[i]%2!=0){
            flag++;
        }
        else{
            odd++;
        }

    }
    cout<<"odd :"<<flag<<"\n";
    cout<<"even :"<<odd;


}
