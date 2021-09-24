#include<iostream>
using namespace std;


int main(){
    int num;
     cout<<"Enter no. of element to print in array: ";
    cin>>num;

    int arr[num];

    cout<<"Enter "<<num<<" elements for array: \n";

    for(int i=0;i<num;i++){
        cout<<"Elements at index ["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<"=================Unsorted Array==================\n";
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }


    for(int i=1;i<num;i++){
        int current = arr[i];
        int j=i-1;

        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"\n=================Sorted Array==================\n";
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}