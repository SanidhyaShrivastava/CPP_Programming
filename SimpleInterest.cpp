#include<iostream>
using namespace std;
class SimpleInterest
{
    public: float principal,time,rate,simpleInterest;
    void input()
    {
        cout<<"Enter Principal: ";
        cin>>principal;
        cout<<"Enter rate: ";
        cin>>rate;
        cout<<"Enter time: ";
        cin>>time;
        
        simpleInterest=(principal*rate*time)/100;
    }
    void output()
    {
        cout<<"=============================\n";
        cout<<"Simple Interest="<<simpleInterest;
    }
};
int main()
{
    SimpleInterest ob;
    ob.input();
    ob.output();
    

}