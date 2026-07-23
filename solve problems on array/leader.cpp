/* #include<bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int> vec, int n)
{
    vector<int> ans;

    for(int i = 0; i < n; i++)
    {
        bool isLeader = true;

        for(int j = i + 1; j < n; j++)
        {
            if(vec[j] > vec[i])
            {
                isLeader = false;
                break;
            }
        }

        if(isLeader)
        {
            ans.push_back(vec[i]);
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    vector<int> result = leader(vec, n);

    for(int x : result)
    {
        cout << x << " ";
    }
} */


//optimal

#include<bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int> vec, int n)
{
    vector<int> ans;

    int maxi = vec[n-1];
    ans.push_back(maxi);

    for(int i = n-2; i >= 0; i--)
    {
        if(vec[i] > maxi)
        {
            ans.push_back(vec[i]);
            maxi = vec[i];
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    vector<int> result = leader(vec, n);

    for(int x : result)
    {
        cout << x << " ";
    }
}