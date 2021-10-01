#include<iostream>
using namespace std;

void primeSieve(int n){
    bool prime[]={false};

    for(int i=2; i<n; i++){
        if(prime[i]==false){
            for(int j=i*i; j<n; j+=i){
                prime[j]=true;
            }
        }
    }
    for(int i=2; i<n; i++){
        if(prime[i]==false){
            cout<<i<<" ";
        }
    }
}

int main(){
    
    int n;
    cin>>n;

    primeSieve(n);

    return 0;}