#include<iostream>
using namespace std ;
int main(){
    int j [3][3] = {1,2,3,4,5,6,7,8,9};
    int k[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i = 0 ; i < 3; i++){
            for(int o = 0 ; o<3 ; o++ ){
                cout<<"\t"<<"sum is \t"<<j[i][o]+k[i][o];
            }
            cout<<"\n";

    }

}
