//single try with multiple catch
#include<iostream>
using namespace std ;

    void cyb(int c ){
    try{
        if(c==1){
            throw 1;
        }
        else if(c==-1){
            throw 2.5 ;
        }
        else if(c==0){
            throw 'c';
        }
        cout<<"welcome";

    }

  catch(int c){
    cout<<"integer \n";
  }
  catch (double c ){
    cout<<"double for -ve \n";
  }
  catch(char c ){
  cout<<"char for 0\n";
  }
}

int main(){
    cyb(1);
    cyb(-1);
    cyb(0);
    cyb(50);
}
