#include<iostream>
using namespace std;
int main() {
    int arr[3][2];
    for(int r = 0 ; r < 3 ; r++){
        for(int c = 0 ; c < 2 ; c++){
            cin>>arr[r][c];
        }
    }
//to store value from user
for(int r = 0 ; r < 3 ; r++){
        for(int c = 0 ; c < 2 ; c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }

}






