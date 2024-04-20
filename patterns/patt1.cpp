//with the same flow//
/*
1
1 2
1 2 3
i for rows and \t for new row
j for colums and \n for new cols
cout<<j;
end
1
2 2
3 3 3
cout<<i;
*/
#include<iostream>
using namespace std ;
int main() {
    for(int i = 1 ; i <= 3 ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<i<<"\t";
        }
        cout<<"\n";
    }
}
