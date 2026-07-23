/* //BRUTE FORCE APPROCH

#include<bits/stdc++.h>

using namespace std;

void rev(int n,int arr[])

{
    int arr1[n];

    for(int i=0;i<n;i++)
    {
        arr1[i]=arr[n-1-i];
    }

   cout<<"rev of array is :" ;

   for(int i=0;i<n;i++)
   {

    cout<<arr1[i]<<" ";
   
   }




}
int main()
{
    int n;
    cout<<"enter number of elements in the array:"<< endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    rev(n,arr); 

    return 0;
} */

/* 
// Two pointer approach

#include<bits/stdc++.h>

using namespace std;

void rev(int n,int arr[])
{
    int p1=0;
    int p2=n-1;

    while(p1<p2)
    {
        int temp=arr[p1];
        arr[p1]=arr[p2];
        arr[p2]=temp;

        p1++;
        p2--;
    }

    cout<<"rev of array :";

    for (int i=0;i<n;i++)
    {
        cout<< arr[i]<< " ";
    }

}

int main()
{
    int n;
    cout<<"enter number of elements in the array:"<< endl;
    cin>>n;

    int arr[n];

    cout<<"write "<< n<< " elments of array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    rev(n,arr); 

    return 0;
}
 */


//use of reverse function

#include<bits/stdc++.h>

using namespace std;

void rev(vector<int>& arr)
{
    reverse(arr.begin(), arr.end());
}


int main()
{
    int n;
    cout<<"enter number of elements in the array:"<< endl;
    cin>>n;

   vector<int> arr(n);

    cout<<"write "<< n<< " elments of array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    rev(arr);
    
     cout << "Reversed array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
