#include<iostream>
using namespace std;


int main()
{
    int num1;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    int num2;
    cin>>num2;
    int gcm=1;
    for(int i=1; i<=num1&&num2; i++){
        if(num1%i==0 && num2%i==0){
            gcm=i;
        }
    }
    cout<<"Greatest divisor of "<<num1<<" and "<<num2<<" is: "<<gcm;
    
    
    
    return 0;
}
