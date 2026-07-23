#include<bits/stdc++.h>

using namespace std;
/* 
int  main()
{

    //brute force approch
    int n;
    int count=0;
    cin>> n;

    while(n>0)
    {
       
        n=n/10;
        count+=1;
    }

    cout<< count;

}
 */

 int main(){

    int n;
    cin>> n;

    //optimal solution

    int cnt = (int)(log10(n)+1);

    cout<<cnt;


 }
    