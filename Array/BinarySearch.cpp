#include<iostream>
using namespace std;


int binarySearch(int arr[], int num, int key){
    int startingPoint=0;
    int endingPoint=num;

    while(startingPoint<=endingPoint){
        int mid=(startingPoint+endingPoint)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            endingPoint=mid-1;
        }
        else{
            startingPoint=mid+1;
        }
    }
    return -1;
}

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

    int key;
    cout<<"====================================\n";
    cout<<"Enter the element to find in array: ";
    cin>>key;

    cout<<binarySearch(arr,num,key);
    
    return 0;
}