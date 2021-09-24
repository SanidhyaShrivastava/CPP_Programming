#include<iostream>
using namespace std;


int main()
{
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;
    int gcm=1;
    for(int i=1; i<=num1&&num2; i++){
        if(num1%i==0 && num2%i==0){
            gcm=i;
        }
    }
    cout<<gcm;
    
    
    return 0;
}
