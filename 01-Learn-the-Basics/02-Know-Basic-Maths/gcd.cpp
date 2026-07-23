#include<bits/stdc++.h>
using namespace std;

// brute force
/* 
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int gcd=1;

    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }

    cout<<gcd;
} */

//optimal sol(Euclidean Algorithm:

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    while(n2!=0)
    {
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }

    cout<<n1;
}
