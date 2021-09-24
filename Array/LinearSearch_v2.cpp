#include<iostream>
using namespace std;

void linearSearch(int arr[] ,int num, int key){
    for(int i=0;i<num;i++){
        if(key==arr[i]){
            cout<<"Element is present at index ["<<i<<"]";
           
        } 
        
    }
    
    
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

    linearSearch(arr,num,key);
    
    
    return 0;
}