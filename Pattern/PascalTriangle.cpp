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
    cout<<"================Pascal Triangle==================\n";
    int rows;
    
    cout<<"Enter value row: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
        }
        cout<<endl;
    }


    return 0;
}