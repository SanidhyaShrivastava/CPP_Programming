#include<iostream>
using namespace std;

int main(){
    cout<<"===============Number Pattern=================\n";
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows-i; j++){
            cout<<" ";
        }
        int num=1;
        for(int k=1; k<=i; k++){
            
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    
    return 0;
}