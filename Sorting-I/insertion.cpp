#include<bits/stdc++.h>

using namespace std;

void insertion(int arr[],int n)
{

    for(int i=1;i<n;i++)
    {
        int j=i;

        while(j >0 && arr[j]<arr[j-1])
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;

            j--;
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

    insertion(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }


    return 0;
}

// time complexity is O(n^2) for avg and worse ans O(n ) for best case