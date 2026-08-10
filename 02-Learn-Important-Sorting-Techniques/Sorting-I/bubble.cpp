#include<bits/stdc++.h>

using namespace std;

void bubble(int arr[],int n)
{

    for(int i=n-1;i>=0;i--)
    {

        int didswap=0;
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                didswap=1;
            }
        }

        if(didswap==0)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }

    bubble(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }


    return 0;
}

//the optimization of the bubble sort is done by taking didswap as a variable if didswap value is zero it means swap does not takes place a single time and the array is alreay sorted..


// time complexity is O(n^2) for avg and wost case..


// time complexity is O(n) for best case..