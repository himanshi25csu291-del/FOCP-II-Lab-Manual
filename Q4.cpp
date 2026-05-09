#include<iostream>
using namespace std ;
int main(){
    //applying 20% discount on thw total bill
    int item;
    int quantity;
    int total=0;
    int disprice;
    cout<<"Enter total item no."<<endl;
    cin>>item ;
    for(int i =0;i<item;i++){
        int unitprice;
        cout<<"enter unit price  "<<endl;
        cin>>unitprice;
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        total=total+unitprice*quantity;
    }
disprice=total-(total/5);
cout<<"the discounted price is "<<disprice;
}
