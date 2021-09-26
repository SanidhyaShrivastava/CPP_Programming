#include<iostream>
using namespace std;


void increment(int *a){
    *++a;
}

int main()
{
   int b=3;

  increment(&b);
   cout<<b;
    
    
    return 0;
}
