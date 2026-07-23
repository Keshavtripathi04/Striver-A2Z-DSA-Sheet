/* BRUTE FORCE

#include<bits/stdc++.h>
using namespace std;

int sum(int n)

{
    int temp_sum=0;

    for(int i=0;i<=n;i++)
    {
        temp_sum+=i;
    }

    return temp_sum;

}

int main()
{
    int n;
    cout<<"enter value of n upto you want sum:"<< endl;
    cin>>n;

    cout<<"sum is :"<< sum(n);

    return 0;



} */

/*FORMULA BASED
We can use the formula for the sum of N numbers, i.e N(N+1)/2.
Take a variable sum.
Initialize it with N(N+1)/2, where N is a given number. */


//RECURSIVE APPROCH

#include<bits/stdc++.h>
using namespace std;

int sum(int n)

{
    if(n==1)
    return 1;

    return n+sum(n-1);

}

int main()
{
    int n;
    cout<<"enter value of n upto you want sum:"<< endl;
    cin>>n;

    cout<<"sum is :"<< sum(n);

    return 0;

}
