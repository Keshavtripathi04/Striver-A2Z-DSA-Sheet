//linear search

#include<bits/stdc++.h>

using namespace std;

int linear(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i]==key){
            return i;
        }
    }


  return -1;


}

int main()
{
    int n;
    cout<<"enter no of elemnts in array:"<<endl;
    cin>>n;

    int key;
    cout<<"enter element to find:"<<endl;
    cin>>key;

    int arr[n];

    cout<<"The elements of array are:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int index = linear(arr, n, key);

    if(index != -1)
    {
        cout << "Element found at index " << index << endl;
    }
    else
    {
        cout << "Element not found in array" << endl;
    }

    return 0;
}

    






