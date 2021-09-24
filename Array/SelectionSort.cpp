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

    int temp;

    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    cout<<"\n=================Sorted Array==================\n";
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    

    
    
    return 0;
}