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

    int count = 1;
    int temp;
    while(count<num-1){
        for(int i=0;i<num-count;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        count++;
    }
    cout<<"\n=================Sorted Array==================\n";
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}