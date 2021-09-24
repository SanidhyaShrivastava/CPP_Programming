#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    
    int lastDigit;
    int reverse=0;
    int originalNumber=number;

    while(originalNumber>0){
        lastDigit=originalNumber%10;
        reverse=reverse*10+lastDigit;
        originalNumber/=10;
    }
    cout<<"Reverse of "<<number<<" is "<<reverse;

    return 0;
}