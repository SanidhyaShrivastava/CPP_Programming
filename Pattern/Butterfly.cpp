#include<iostream>
using namespace std;

int main(){
    cout<<"===============Butterfly=================\n";
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    //======================Upper Half================================
    for(int i=1; i<=rows; i++) {
			for(int j=1; j<=i; j++) {
				cout<<"*";
			}
			
			for(int k=1; k<=(rows-i)*2; k++) {
				cout<<" ";
			}
			for(int l=1; l<=i; l++) {
				cout<<"*";
			}
            cout<<endl;
		}

    //===========================Lower Half===============================

    for(int i=rows; i>=1; i--) {
			for(int j=1; j<=i; j++) {
				cout<<"*";
			}
			
			for(int k=1; k<=(rows-i)*2; k++) {
				cout<<" ";
			}
			for(int l=1; l<=i; l++) {
				cout<<"*";
			}
            cout<<endl;
		}


    return 0;
}