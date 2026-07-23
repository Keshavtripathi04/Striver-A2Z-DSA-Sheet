#include<bits/stdc++.h>

using namespace std;

int fact(int n)
{
    if(n==0)
    return 1;

    return n*fact(n-1);
}


int main()
{
    int n;
    cout<<"enter value of n to calculate factorial:"<< endl;
    cin>>n;

    cout<<"factorial is :"<< fact(n);

    return 0;

}







