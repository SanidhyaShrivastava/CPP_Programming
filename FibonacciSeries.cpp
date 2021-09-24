#include <iostream>
#include<cmath>
using namespace std;

void fibonacci(int range){
    int firstNumber=0;
    int secondNumber=1;
    int thirdNumber;
    
    for(int i=1; i<=range; i++){
        cout<<firstNumber<<",";
        thirdNumber=firstNumber+secondNumber;
        firstNumber=secondNumber;
        secondNumber=thirdNumber;
    }
}

int main(){

    int number;
    cout<<"Enter range to print Fibonacci series: ";
    cin>>number;

    fibonacci(number);

    return 0;
}