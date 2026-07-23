#include<bits/stdc++.h>

using namespace std;

void printn(string name, int n)
{
    if (n==0)
    {
        return;

    }

    

    cout<< name << " ";

    printn(name,n-1);


}

int main()
{
    int n;
     cout<<"enter number of times a name should be printed"<<endl;

    cin>>n;
   
    string s;
    cout<<"enter the name to print"<<endl;
    cin>>s;
    

    printn(s,n);

    return 0;
    
}