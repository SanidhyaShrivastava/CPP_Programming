#include<iostream>
using namespace std;

class Search{
    public: int arr[20],key,num;
    void in();
    void out();
    void searching();
};

void Search:: in() {
    int i;
    cout<<"Enter no. of element to print in array: ";
    cin>>num;
    cout<<"==============================\n";
    cout<<"Enter "<<num<<" elements for array: \n";

    for(i=0;i<num;i++){
        cout<<"Elements at index ["<<i<<"] : ";
        cin>>arr[i];
    }
    
}

void Search::out(){
    cout<<"========Output of Array==========\n";
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
}

void Search::searching(){
    cout<<"\n====================================\n";
    cout<<"Enter the element to find in array: ";
    cin>>key;
    cout<<"===================================\n";
    int i,flag=0;
    for(i=0;i<num;i++){
        if(key==arr[i]){
            cout<<"Element "<<key<<" is found at index ["<<i<<"]\n";
            flag++;
        }
    }
    if(flag==0){
        cout<<"Element is not present in the array\n";
    }
    cout<<"======================================\n";

}

int main(){
    Search search;
    search.in();
    search.out();
    search.searching();
    
    
    return 0;
}