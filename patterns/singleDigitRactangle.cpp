#include<iostream>
using namespace std;

int main(){
    int row;
    int cols;
    char charecter;
    cout<<"Let's print a Ractangle with a character \n";
    cout<<"Enter row \n =>"; cin>>row;
    cout<<"enter columb\n =>";cin>>cols;
    cout<<"Enter character you wnat to use \n =>";cin>>charecter;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=cols; j++){
            if (i==1 || i==row || j==1 || j==cols){
                cout<< charecter << " ";
            }else{
                cout<< " "<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}