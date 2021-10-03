#include <iostream>
using namespace std;

int sumTilln(int n){
    
    if(n==0){
        return 0;
    }

    int prevSum=sumTilln(n-1);
    return n+prevSum;
}

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    
    cout<<"Sum till "<<number<<" = "<<sumTilln(number)<<endl;    
    
    return 0;
}