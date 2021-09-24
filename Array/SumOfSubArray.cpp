#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of values to store in array: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the value to store in index ["<<i<<"] : ";
        cin>>arr[i];
    }

    int sumOfSubArray=0;

    for(int i=0; i<n; i++){
        sumOfSubArray=0;
        for(int j=i; j<n; j++){
            sumOfSubArray+=arr[j];
            cout<<"Sum of Subarray is = "<<sumOfSubArray<<endl;
        }
    }
    
    
    
    return 0;

    }