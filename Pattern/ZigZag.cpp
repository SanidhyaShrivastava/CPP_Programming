#include<iostream>
using namespace std;

int main(){
    cout<<"===============ZigZag Pattern=================\n";
    int columns;
    cout<<"Enter number of columns: ";
    cin>>columns;
    
    for(int i=1; i<=3; i++){
        for(int j=1; j<=columns; j++){
            if(((i+j)%4==0) || (i%2==0 && j%4==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}