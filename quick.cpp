#include<bits/stdc++.h>

using namespace std;

void partition(vector<int> &arr,int low,int high)
{
    
}



void qs(vector<int> &arr,int low,int high)
{

    if(low<high)

    {
        int PI=partition(arr,low,high);

    
    
        qs(arr,low,PI-1);
        qs(arr,PI+1,high);
        
    }

    
    
}