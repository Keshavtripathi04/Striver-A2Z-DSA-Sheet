#include<bits/stdc++.h>

using namespace std;

class solution {

public:

void printn(int n){

    if(n==0)
    {
        return;
    }

    printn(n-1);

    cout<< n << endl;

    
}

};

int main(){

    int n;
    cout<<"enter value of n upto which numbers are printed:"<<endl;
    cin>>n;

    solution obj;
    obj.printn(n);

    return 0;

}
   