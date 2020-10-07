/**array consist only 0 and 1**/
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i)
            arr[i]+=arr[i-1];
    }
    ll res=0,even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]&1)
        {
            res++;
            res+=even,odd++;
        }
        else
            res+=odd,even++;
    }
    cout<<res<<endl;
    return  0;
}