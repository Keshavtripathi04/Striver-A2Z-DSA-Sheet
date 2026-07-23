/* // usig hashmap

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no of elements in array 1:"<<endl;
    cin>>n;

    int arr1[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    
    int m ;
    cout<<"enter the no of elements in array 2:"<<endl;
    cin>>m;

    int arr2[m];

    
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        mp[arr1[i]++];
    }

      for(int i=0;i<m;i++)
    {
        mp[arr2[i]++];
    }

    cout<<"union of arrays are: "<<endl;

    for(auto it :mp)
    {
        cout<< it.first<<" ";

    }

    return 0;

}
    
 */

//using set as it contain only unique elements

/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no of elements in array 1:"<<endl;
    cin>>n;

    int arr1[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    
    int m ;
    cout<<"enter the no of elements in array 2:"<<endl;
    cin>>m;

    int arr2[m];

    
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    set<int> mp;

    for(int i=0;i<n;i++)
    {
        mp.insert(arr1[i]);
    }

      for(int i=0;i<m;i++)
    {
         mp.insert(arr2[i]);
    }

    vector<int> unionarr(mp.begin(),mp.end());

    cout<<"union of arrays are: "<<endl;

    for (int x : mp) {
        cout << x << " ";
    }




    return 0;

}
 
 */

 //optimal sol using two pointer approach

 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no of elements in array 1:"<<endl;
    cin>>n;

    int arr1[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    
    int m ;
    cout<<"enter the no of elements in array 2:"<<endl;
    cin>>m;

    int arr2[m];

    
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    int i=0;
    int j=0;
    vector<int> mix;

    while(i<n && j<m)
    {
        if(arr1[i]<=arr2[j])
        {
            if(mix.size()==0 || mix.back()!=arr1[i])
            {
                mix.push_back(arr1[i]);
            }

            i++;
        }

        else{
            if(mix.size()==0 || mix.back() != arr2[j])
            {
                mix.push_back(arr2[j]);
            }
        }j++;
    }

        cout<<"union of arrays are: "<<endl;



    for (int x : mix)
{
    cout << x << " ";
}


}

