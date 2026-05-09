#include<iostream>
using namespace std ;
int main(){
    int a,b,c;
cout <<"Enter three scores"<< endl;
cin>>a>>b>>c;
if(a>b &&a>c){
    cout<<"1st player is the winner"<<endl;

}
else if (b>a&&b>c){
cout<<"2nd player is the winner"<<endl;
}
else{
    cout<<"3rd player is the winner"<<endl;
}
}



