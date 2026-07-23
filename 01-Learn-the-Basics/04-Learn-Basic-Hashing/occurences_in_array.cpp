/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of elements in array:"<< endl;
    cin>>n;

    int arr[n];
    cout<<"enter elements of the array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    int hash[100] ={0};
    

    for(int i=0;i<n;i++)
    {

        hash[arr[i]]++;

    }

    int q;
    cout<<"Enter number of queries: "<<endl;
    cin>>q;

    while(q--) 
    { 
        int number;
        cin>>number;

        cout<<hash[number]<<endl;
    }

    return 0;

} */

//USING UNORDERED MAP

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of elements in array:"<< endl;
    cin>>n;

    int arr[n];
    cout<<"enter elements of the array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    cout<<"frequencies are :"<<endl;

    for(auto it :mp)
    {
        cout<<it.first<<" "<< it.second<<endl;  
    }

    return 0;

}