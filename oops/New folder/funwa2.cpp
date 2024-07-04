#include<iostream>
using namespace std ;
class sum{
    public:void um(int arr[]){
            int a = 0 ;
            cout<<"sum of array is:";
            for(int i = 0 ; i  < 5 ; i++){
                a =a+arr[i];
            }
            cout<<a;
    }
};
int main(){
    int nm[5] = {1,5,6,5,4};
    sum l ;
    l.um(nm);

}
