#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
  int a;
  cin>>a;
  int b ;
  cin>>b;
   for(int n = a ; n <= b ; n++){
       if(n>=1&&n<=9){
           if(n==1){
               cout<<"one"<<"\n";
           }
      else if(n==2){
          cout<<"two"<<"\n";
      }
      else if(n==3){
          cout<<"three"<<"\n";
      }
      else if(n==4){
          cout<<"four"<<"\n";
      }
      else if(n==5){
          cout<<"five"<<"\n";
      }
      else if(n==6){
          cout<<"six"<<"\n";
      }
      else if(n==7){
          cout<<"seven"<<"\n";
      }
      else if(n==8){
          cout<<"eight"<<"\n";
      }
      else{

          if(n>9){
                cout<<"nine"<<"\n";
            if(n%2==0){
                cout<<"even";
            }
            else{
                cout<<"odd";
            }
          }
      }
        }
    }
}


