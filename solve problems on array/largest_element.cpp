/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of elements in array:"<< endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"enter elements of the array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    sort(arr.begin(),arr.end());

    cout<<"max element is :"<<arr[n-1];

    return 0;
}     */



//OPTIMAL SOL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of elements in array:"<< endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"enter elements of the array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    int maxi=*max_element(arr.begin(),arr.end());


    cout<<" Maximum element is:"<<maxi;
    
    return 0;

}

