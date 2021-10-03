#include <iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    cout<<"Factorial of "<<number<<" = "<<fact(number)<<endl;
    return 0;
}