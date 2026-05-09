#include<iostream>
using namespace std;
int main(){
    //conversion from celsius to fahrenheit and vice versa 
    int choice;
    cout<<"Enter 1.celsius to fahrenheit"<<endl<<"2.farenheit to celcius";
    cin>>choice;
    int f ;
    int c;
    
    if(choice==1){
        cout<<"enter temp in celcius";
        cin>>c;
        f=(c*1.8)+32;
        cout<<"temperature in fahrenheit ="<<f;

    }
    else if (choice==2){
        cout<<"enter temp in fahrenheit";
        cin>>f;
        c=(f-32)*5/9;
        cout<<"temperature in celcius ="<<c;


    }
    else{
        cout<<"wrong input";
    }
}
