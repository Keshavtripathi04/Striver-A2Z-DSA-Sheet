/* //brute force by linear search

#include<bits/stdc++.h>

using namespace std;

int missing(vector<int> arr,int n)

{
   

   for(int i=0;i<=n;i++)
   {

     bool found=false;

    for(int j=0;j<n;j++)
    {
        if(arr[j]==i)
        {
            found=true;
            break;
        }
    }

     if(found ==false)
    {
        return i;
    }

   

   }

   return -1;
}


  
int main()
{
    vector<int> arr={0,1,2,3,5};
    int n=6;
    cout<< missing(arr,n);

    return 0;
} */


/* 

//approch 1 using sum formula

#include<bits/stdc++.h>

using namespace std;

int missing(vector<int> arr,int n)

{

   
    int actualsum=0;

    for(int i=0;i<arr.size();i++)
    {
        actualsum+=arr[i];

       
    }

    int expectedsum=n*(n+1)/2;

    return expectedsum-actualsum;
   

}


  
int main()
{
    vector<int> arr={0,1,2,3,5};
    int n=5;
    cout<< missing(arr,n);

    return 0;
} 
 */



 // approch 2 usimh xor

 #include<bits/stdc++.h>

using namespace std;

int missing(vector<int> arr,int n)

{

    int xor1=0;
    int xor2=0;

    for(int i=0;i<arr.size();i++)
    {
        xor1^=arr[i];

        xor2^=(i+1);
    }

    return xor1^xor2;

}


  
int main()
{
    vector<int> arr={0,1,2,3,5};
    int n=5;
    cout<< missing(arr,n);

    return 0;
} 