#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    
    int i;
    for(i=2; i<number/2; i++){
        if(number%i==0){
            cout<<"Not Prime";
            break;

        }
    }
    if(i==number/2){
        cout<<"Prime Number";
    }

    return 0;
}