#include<iostream>
using namespace std;

int main(){
    cout<<"===============FLoyd's Triangle=================\n";
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    int num=1;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }

    
    return 0;
}