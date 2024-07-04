#include<iostream>
#include<cstring>
using namespace std ;
int main(){
    char  c [5]="chir";
    char j [5] ="klmo";
    cout<<strlen(c);
    cout<<strupr(c);
    cout<<strlwr(c);
    cout<<strrev(c)<<"/n";
    cout<<strcat(c,j);
    cout<<strcpy(c,j);
}
