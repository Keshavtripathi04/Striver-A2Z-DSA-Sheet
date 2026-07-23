//in brute for approach we will create a dummy array and iterate the normal array from thr second element and at last put the first element at the end

//OPTIMAL SOLUTION

#include<bits/stdc++.h>

using namespace std;

int main()
{
int arr[5]={1,2,3,4,5};

int temp=arr[0];

for(int i=1;i<5;i++)
{
    arr[i-1]=arr[i];

}

arr[4]=temp;

cout<<"rotated arry by one time is:"<<endl;


    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

return 0;


}