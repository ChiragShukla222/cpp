#include<iostream>
using namespace std ;
int m = 40;
class shop{
    int itemCode[50];
    float itemPrice[50];
    int count;
    public:
        void CNT(){
            count = 0;
        }
        void getItem();
        void displaySum();
        void remove();
        void displayItems();
};
    void shop :: getItem(){
        cout<<"Enter the Item Code : ";
        cin>>itemCode[count];
        cout<<"Enter the Item Cost : ";
        cin>>itemPrice[count];
        count++;
    }
    void shop :: displaySum(){
        float sum= 0;
        for(int i = 0 ; i < count ;i++){
            sum = sum + itemPrice[i];
            cout<<"\n Total Value is :"<<sum<<"\n";
        }
    }
    void shop :: remove(){
        int a ;
        cout<<"Enter the Item Code :";
        cin>>a;
        for(int i = 0 ; i < count ; i++){
            if(a==itemCode[i]){
                itemCode[i]=0;
            }
        }
    }
    void shop :: displayItems(){
            cout<<"\n Code  Price \n";
            for(int i = 0 ; i < count ; i++){
                cout<<itemCode[i]<<"\t";
                cout<<itemPrice[i];
            }

            cout<<"\n";
    }


int main(){
    int option;

    shop sp;
    sp.CNT();
    do{

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
        cout<<"Add-items \n";
        sp.getItem();

        break;
    case 2:
        cout<<"Display total bill \n";
        sp.displaySum();
        break;
    case 3 :
        cout<<"Remove Items \n";
        sp.remove();
        break;
    case 4:
        cout<<"Display all items \n";
        sp.displayItems();
        break;
    case 5:
        cout<<"Total items \n";
        sp.displayItems();
        break;
    case 6:
        cout<<"quit";

        break;
    default:
        cout<<"please select an valid option";
}
    }
    while(option!=6);
}
