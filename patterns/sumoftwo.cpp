#include<iostream>
using namespace std ;
int main() {
    int arr[3][3];
    int crr [3][3] ={1,2,3,4,5,6,7,8,9};
    int brr[3][3] ={11,12,13,14,15,16,17,18,19};
    for(int r = 0 ; r < 3 ; r++){
        for(int c =0 ; c <3 ; c++){
            //arr[r][c] = crr[r][c]+brr[r][c];
            cout<<crr[r][c]+brr[r][c]<<"\t";
        }
        cout<<"\n";
    }



}
