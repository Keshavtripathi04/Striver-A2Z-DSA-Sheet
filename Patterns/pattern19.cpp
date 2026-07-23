#include<bits/stdc++.h>

using namespace  std;

int main()
{
    int n;
    cin >> n;
    int insp=0;

    for(int i=0;i <n;i++)

    {

        // stars
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }

        //spacse

        for(int k=0;k<insp;k++)
        {
            cout<<" ";

        }

         
        // stars
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }

        insp+=2;

        cout<< endl;


    }

    int inspp=2*n-2;

    
    for(int i=1;i <=n;i++)

    {

        // stars
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }

        //spacse

        for(int k=0;k<inspp;k++)
        {
            cout<<" ";

        }

         
        // stars
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }

        inspp-=2;

        cout<< endl;


    }

}