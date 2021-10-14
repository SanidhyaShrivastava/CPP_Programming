#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int i, int key){
    
    if(i==n){
        return -1;
    }
    
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int i, int key){
    

    if(i==n){
        return -1;
    }
    int store=lastocc(arr,n,i+1,key);

    if(store!=-1){
        return store;
    }

    if(arr[i]==key){
        return i;
    }

    return -1;
}

int main(){
    int arr[]={4,8,4,5,8,7,7};

    cout<<firstocc(arr,7,0,8)<<endl;
    cout<<lastocc(arr,7,0,8)<<endl;


    return 0;
}