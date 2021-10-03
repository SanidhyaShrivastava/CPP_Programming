#include <iostream>
using namespace std;

int pow(int n, int p){
    if(p==0){
        return 1;
    }

    return n * pow(n, p-1);
}

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    int power;
    cout<<"Enter power: ";
    cin>>power;

    cout<<pow(number, power)<<endl;

    return 0;
}