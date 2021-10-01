#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter first number: ";
    cin>>a;

    int b;
    cout<<"Enter second number: ";
    cin>>b;

    for(int i=a; i<=b; i++){
        int j;
        for(j=2; j<=i; j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<" ";
        }
    }


    return 0;
}