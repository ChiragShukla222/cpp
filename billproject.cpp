#include<iostream>
using namespace std ;
class shop{
    public:void Additems(int pno[10]){
        for(int i = 0 ; i < 10 ; i++){
            cin>>pno[i];
        }
        cout<<"product-no";
        for(int i = 0 ; i < 10 ; i++){
            cout<<pno[i];

        }
    }



};
int main(){
    int option;

    shop sp;
cout<<"choose any of the following option:"<<"\n";
        cout<<"1. Add items"<<"\n";
        cout<<"2. Display Total Bill"<<"\n";
        cout<<"3. Remove Items"<<"\n";
        cout<<"4. Display All Items"<<"\n";
        cout<<"5. Total Items"<<"\n";
        cout<<"6. Quit"<<"\n";
cin>>option;
switch(option){
    case 1 :
        cout<<"Add-items";
        cout<<"\n enter the productno:";
        cin>>pno;

        break;
    case 2:
        cout<<"Display total bill";
        break;
    case 3 :
        cout<<"Remove Items";
        break;
    case 4:
        cout<<"Display all items";
        break;
    case 5:
        cout<<"Total items";
        break;
    case 6:
        cout<<"quit";

        break;
    default:
        cout<<"please select an valid option";
}
}
