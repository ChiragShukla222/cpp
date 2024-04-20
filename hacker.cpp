#include<iostream>
using namespace std;
int main()
{

   int n [] ={1,2,3,4,5,6,7,8,9};
   for(int i = 0 ;i<=9;i++){



    if(n[i]>=1&&n[i]<=9){
        if(n[i]==1){
            cout<<"one";

        }
        else if(n[i]==2){
            cout<<"two";

        }
        else if(n[i]==3){
            cout<<"three";
        }
        else if(n[i]==4){
            cout<<"four";
        }
        else if(n[i]==5){
            cout<<"five";
        }
        else if(n[i]==6){
            cout<<"six";

        }
        else if(n[i]==7){
            cout<<"seven";

        }
        else if(n[i]==8){
            cout<<"eight";
        }
        else{
            cout<<"nine";
        }
    }
        else{
         cout<<"greater than 9";
         }
   }
}


 int n;
  if(n>=1&&n<=9){
      if(n==1){
          cout<<"one";
      }
      else if(n==2){
          cout<<"two";
      }
      else if(n==3){
          cout<<"three";
      }
      else if(n==4){
          cout<<"four";
      }
      else if(n==5){
          cout<<"five";
      }
      else if(n==6){
          cout<<"six";
      }
      else if(n==7){
          cout<<"seven";
      }
      else if(n==8){
          cout<<"eight";
      }
      else{
          cout<<"nine";
      }
  }
    else{
        cout<<"greater than 9";
    }
