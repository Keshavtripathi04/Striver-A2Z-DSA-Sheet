#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int space=2*n-2;

    for(int i=1;i<=2*n-1;i++)
    {
        int star=i;

        if(i>n) star=2*n-i;
        for(int i=1;i<=star;i++)
        {
            cout<<"*";
        }

        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }

        for(int i=1;i<=star;i++)
        {
            cout<<"*";
        }

        cout<<endl;
        if(i<n) space-=2;
        else space+=2;

    }


}