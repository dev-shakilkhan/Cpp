#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 9;
    
    cout<<"x value is "<< x <<endl;
    cout<<"Y value is "<< y <<endl;
    
    int temp = x;
    x = y;
    y = temp;
    cout<<"x & y valur after swap"<<endl;
    cout<<"x value is "<< x <<endl;
    cout<<"Y value is "<< y <<endl;

    return 0;
}
