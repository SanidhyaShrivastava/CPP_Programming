#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


class String{
    public: 

    
    void frequency(string s);
    void del(string s);
    void chardelete(string s);
    void palindrome(string s);
};


void String::frequency(string s){
    cout<<"====================================\n";
    char ch;
    cout<<"Enter the character that you want to search: ";
    cin>>ch;
    
    
    int count = 0;

    for(int i=0;i<s.length();i++){
        if(ch == s[i]){
            count++;
        }
    }
    cout<<"=====================================\n";
    cout<<"Occurance of character "<<ch<<" is: "<<count<<endl;
}

void String::del(string s){
    cout<<"======================================\n";
    int a,b;
    cout<<"=========Deleting a specified String==========\n";
    cout<<"Enter the position to delete character: \nStarting Point: ";
    cin>>a;
    cout<<"Ending Point: ";
    cin>>b;
    cout<<"=======================================\n";
    string modified=s.erase(a,b);
    cout<<"Modified String = "<<modified<<endl;

}

void String::chardelete(string s){
    cout<<"======================================\n";
    cout<<"Enter the position of String that you want to delete: ";
    int pos;
    cin>>pos;

    

}


int main()
{   
    string s;
    cout<<"====================================\n";
    cout<<"Enter the string: ";
    getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    String st;
    // st.input();
    cout<<"====================================\n";
    cout<<"1. Find frequency of a Character \n2. Delete a specified String\n \n3. Delete a specified Character from a String\n";
    cout<<"====================================\n";
    cout<<"Select anyone of the choice: ";
    int choice;
    cin>>choice;

    switch(choice){
        case 1: st.frequency(s);
        break;

        case 2: st.del(s);
        break;

        default: cout<<"You have not selected the correct choice"<<endl;
    }



}
