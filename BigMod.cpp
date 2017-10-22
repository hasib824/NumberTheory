/*
Big Mod Implementation
tutorial link : http://www.shafaetsplanet.com/planetcoding/?p=936
*/
#include<bits/stdc++.h>
using namespace std;

int get_bigMod(int nmbr,int power,int mod)
{
    if(power == 0 ) return 1;
    if(!power&1) // If power is Even
    {
        int res = get_bigMod(nmbr,power/2,mod);
        return ((res%mod)*(res%mod))%mod;
    }
    else // If power is Odd
        return (((get_bigMod(nmbr,power-1,mod)%mod)*(nmbr%mod)%mod));

}
int main()
{
    while(1)
    {
        printf("Please inter number and power : ");
        int nmbr, power;
        scanf("%d %d",&nmbr,&power);
        printf("Please enter mod number : ");
        int mod; scanf("%d",&mod);
        cout<<"The rersult is : "<<get_bigMod(nmbr,power,mod)<<"\n";
    }
    return 0;
}
