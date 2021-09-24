#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of values to store in array: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the value to store in index ["<<i<<"] : ";
        cin>>arr[i];
    }

    int maxNo=arr[0];
    int minNo=arr[0];

    for(int i=0; i<n; i++){
        if(maxNo<arr[i]){
            maxNo=arr[i];
        }
        if(minNo>arr[i]){
            minNo=arr[i];
        }
    }
    cout<<"========================================\n";
    cout<<"Largest value in array = "<<maxNo<<"\nSmallest value in array = "<<minNo<<endl;
    
    
    return 0;
}