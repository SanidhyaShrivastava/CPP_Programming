#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    
    int originalNumber=number;
    int lastDigit;
    int sum=0;


    while(originalNumber>0){
        lastDigit=originalNumber%10;
        sum+=pow(lastDigit,3);
        originalNumber/=10;
    }
    if(sum==number){
        cout<<"Number is Armstrong Number";
    }
    else{
        cout<<"Number is not Armstrong Number";
    }

    return 0;
}