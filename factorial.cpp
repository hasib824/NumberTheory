#include<bits/stdc++.h>
using namespace std;

unsigned long long int getFactorial(int n)
{
    /*
    if(n==1) return 1;
    return n*getFactorial(n-1);
    */
    return n==1 ? 1 : n*getFactorial(n-1); // Using Ternary Operator
}

int main()
{
    while(1)
    {
        printf("\nPlease enter number to get factorial : ");
        int n; scanf("%d",&n);
        printf("\nfactorial of %d is : %llu\n",n,getFactorial(n));
    }
    return 0;
}
