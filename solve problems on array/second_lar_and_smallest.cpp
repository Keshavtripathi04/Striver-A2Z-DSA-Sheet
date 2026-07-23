/* #include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter no of elements in arary:"<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"elements in arary are :"<<endl;

    for(int i=0;i <n;i++)
    {
        cin>>arr[i];
    }

    int small=-1;
    int lar=-1;

    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[0])
        {
            small=arr[i];
            break;

            
           

        }

      

    }

    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]!=arr[n-1])
        {
            lar=arr[i];
            break;

           
        }

        
    }

   
    if(small == -1)
{
    cout << "Second smallest does not exist" << endl;
}
else
{
    cout << "Second smallest = " << small << endl;
}

if(lar == -1)
{
    cout << "Second largest does not exist" << endl;
}
else
{
    cout << "Second largest = " << lar << endl;
}
    return 0;


    


} */

//optimal soloution in single traversal

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter no of elements in arary:"<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"elements in arary are :"<<endl;

    for(int i=0;i <n;i++)
    {
        cin>>arr[i];
    }

    int small =INT_MAX;
    int secondsmall =INT_MAX;
    int large=INT_MIN;
    int secondlarge=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<small){
            secondsmall=small;
            small=arr[i];

        }

        else if(arr[i]>small && arr[i]<secondsmall)
        {
            secondsmall=arr[i];
        }

        if(arr[i]>large){
            secondlarge=large;
            large=arr[i];

        }

        else if(arr[i]<large && arr[i]>secondlarge)
        {
            secondlarge=arr[i];
        }
    }

  if(secondsmall == INT_MAX)
{
    cout << "Second smallest does not exist" << endl;
}
else
{
    cout << "Second smallest is : " << secondsmall << endl;
}

if(secondlarge == INT_MIN)
{
    cout << "Second largest does not exist" << endl;
}
else
{
    cout << "Second largest is : " << secondlarge << endl;
}
    return 0;


}