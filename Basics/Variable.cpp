#include<iostream>
using namespace std;

int main() {
    int a = 10;
    cout << "The value of a is: " << a << endl;
    char b = 'a';
    cout << "The value of b is: " << b << endl;
    const int c = 20;
    cout << "The constant value of c is: " << c << endl;
    a = 80;
    cout << "The changed value of a is: " << a << endl;
    a = 0;
    int d = a++;
    cout << "Post increment of d is " << d << endl;
    cout << "the value of a is " << a << endl;

    a = 0;
    d = ++a;
    cout << "pre increment of a is " << d << endl;
    cout << "The valu of a  is "<< a << endl;

    
    return 0;
}