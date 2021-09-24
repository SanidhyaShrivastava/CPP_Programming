#include<iostream>
using namespace std;

int reverse(int n){
    int ans=0;
    int lastDigit;
    while(n>0){
        lastDigit=n%10;
        ans= ans*10 + lastDigit;
        n/=10;
    }
    return ans;
}


int addBinary(int a, int b){
    int ans=0;
    int prevCarry=0;

    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans= ans*10 +prevCarry;
            prevCarry=0;
        }
        else if((a%2==1 && b%2==0) || (a%2==0 && b%2==1)){
            if(prevCarry==1){
                ans= ans*10 + 0;
                prevCarry=1;
            }
            else{
                ans= ans*10 +1;
                prevCarry=0;
            }
        }
        else{
            ans= ans*10 +prevCarry;
            prevCarry=1;
        }
        a/=10; b/=10;

    }

    while(a>0){
        if(prevCarry==1){
            if(a%2==1){
                ans= ans*10 + 0;
                prevCarry=1;
            }
            else{
                ans= ans*10 + 1;
                prevCarry=0;
            }
        }
        else{
            ans= ans*10 + (a%2);
        }
        a/=10;
    }

    while(b>0){
        if(prevCarry==1){
            if(b%2==1){
                ans= ans*10 + 0;
                prevCarry=1;
            }
            else{
                ans= ans*10 + 1;
                prevCarry=0;
            }
        }
        else{
            ans= ans*10 + (b%2);
        }
        b/=10;
    }

    if(prevCarry==1){
        ans= ans*10 +1;
    }
    ans=reverse(ans);
    return ans;
}



int main(){
    cout<<"===========Adding two Binary Number============\n";
    int binary1;
    int binary2;
    cout<<" ";
    cin>>binary1;
    cout<<"+";
    cin>>binary2;
    cout<<"-------\n";
    cout<<addBinary(binary1, binary2)<<endl;
}