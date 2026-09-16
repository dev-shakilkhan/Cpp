#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Let's check you number is positive or negetive or zero \n ------------------------------------------------------------";
    cout<<"\nEnter your Number \n => ";cin>>num;
    if(num == 0){
            cout<<"Your Number is Zero"<<endl;
        }else if(num > 0){
            cout<<"Your Number is Positive"<<endl;
        }else{
            cout<<"Your Number is Negative"<<endl;
        }
    return 0;
}