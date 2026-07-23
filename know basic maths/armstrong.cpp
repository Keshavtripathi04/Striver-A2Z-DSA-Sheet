#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int k=to_string(num).length();
    int sum=0;
    int copy=num;

    while(num>0)
    {
        int digit=num%10;
        sum += (int)(pow(digit, k) + 0.5); 
      
        num/=10;
    }

    if(sum==copy)
    {
        cout<<"Armstrong number";
    }

    else{
        cout<<"Not Armstrong number";
    }

      return 0;
}