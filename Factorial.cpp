#include <iostream>
#include<cmath>
using namespace std;

int factorial(int num){
    int fact=1;

    for(int i=1; i<=num; i++){
        fact*=i;
    }
    return fact;
}


int main(){
    
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    int ans=factorial(number);
    cout<<"Factorial of "<<number<<" is "<<ans;
    return 0;
}