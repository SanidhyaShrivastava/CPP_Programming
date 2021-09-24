#include<iostream>
using namespace std;

int main(){
    cout<<"===============Diamond=================\n";
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    //======================Upper Part============================
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //======================Lower Part============================
    for(int i=1; i<=rows;i++){
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
        for(int k=1; k<=rows-i+1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}