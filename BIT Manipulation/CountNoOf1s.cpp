#include<iostream>
using namespace std;

int numberOf1s(int n){
    int count = 0;

    while(n){
        n= n & (n-1);
        count++; 
    }
    return count;
}

int main(){

    cout<<numberOf1s(14)<<endl;

    return 0;
}