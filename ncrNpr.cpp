#include<bits/stdc++.h>

using namespace std;

unsigned long long int factorial(int n)
{
    if (n<=1) return 1;
    return n*factorial(n-1);
}

unsigned long long int npr(int n,int r)
{
    return factorial(n)/factorial(n-r);
}

unsigned long long int ncr(int n,int r)
{
  return npr(n,r)/factorial(r);
}
int main()
{
    while(1)
    {
        cout<<"Please enter N and R to calculate nPr and nCr : ";
        int n,r; cin>>n>>r;
        cout<<"nPr is : "<<npr(n,r)<<"\nnCr is : "<<ncr(n,r)<<"\n";
    }
    return 0;
}
