#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){
    int i,j;
    for(i =1; i<=10; i++){
        j=random();
        std::cout<<i<<". "<<j<<std::endl;
    }
}