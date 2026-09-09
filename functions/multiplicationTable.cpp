#include<iostream>
using namespace std;
int r;
void multiplicationTable (int r){
    for(int i = 1; i<=10; i++){
        int result = r*i;
        cout<< r << " * " << i << " = " <<result <<endl;
    }
}

int main(){
    cout<< "Which Number Table you want to see?? \n => ";
    cin>>r;

    multiplicationTable(r);
    
    return 0;
}