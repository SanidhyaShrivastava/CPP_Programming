//================= nCr=n!/(n-r)!*r!==============
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
    
    int n,r;
    cout<<"Enter value n: ";
    cin>>n;
    cout<<"Enter value r: ";
    cin>>r;

    int nCr=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"nCr = "<<nCr<<endl;
    return 0;
}