#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int space=2*(n-1);

    for(int i=1;i<=n;i++)
    {
        
    //numbers 

    for(int j=1;j<=i;j++)
    {
        cout<<j;
    }


    //space

    for(int m=0;m<space;m++)
    {
        cout<<" ";
    }

    //numbers
    for(int k=i;k>=1;k--)
    {
        cout<<k;
    }

    cout<< endl;
    space=space-2;
    }

}