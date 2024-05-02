#include<iostream>
using namespace std ;
int main() {
    int crr[3][3]= {1,2,3,4,5,6,7,8,9};
    int m = 0;
    for(int r = 0; r < 3 ; r++){
        for(int c = 0 ; c < 3 ; c++){
            m = crr[r][c] + m ;
            cout<<"sum of all element is : \t" <<m<<"\t";
        }

        cout<<"\n";

    }



}
