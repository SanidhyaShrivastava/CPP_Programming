#include<iostream>
using namespace std;

int main(){
    cout<<"===============Half Pyramid Using Number=================\n";
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    
    return 0;
}