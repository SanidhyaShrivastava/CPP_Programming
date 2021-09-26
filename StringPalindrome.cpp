#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of words: ";
    cin>>n;

    char word[n+1];
    cout<<"Enter the word to check: ";
    cin>>word;
    bool flag = true;
    
    for(int i=0; i<n; i++){
        word[i] =tolower(word[i]);
    }


    for(int i=0; i<n; i++){

        if(word[i]!=word[n-1-i]){
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"Word is palindrome";
    }else{
        cout<<"Word is not palindrome";
    }


}